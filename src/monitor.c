#include "monitor.h"
#include "database.h"
#include "pinyin.h"
#include <glib.h>
#include <gio/gio.h>
#include <stdio.h>
#include <errno.h>
#include <string.h>
#include <stdlib.h>
#include <signal.h>
#include <unistd.h>
#include <fcntl.h>
#include <syslog.h>
#include <sys/file.h>
#include <sys/ioctl.h>
#include <sys/inotify.h>

#define MAX_BUF_SIZE 1024

typedef struct _MonitorNode
{
	gint wd;
	gchar *path;
} MonitorNode;

const int mask = IN_CREATE | IN_DELETE | IN_DELETE_SELF | IN_MOVED_FROM | IN_MOVED_TO;

static int handle;
static GHashTable *watch_table;
static FILE *fp = NULL;

//struct wd_name wd_array[WD_NUM];

static int setup_monitor(const char *path);
#if 0
static FILE *fp;

static void
file_changed_cb(GFileMonitor *monitor, GFile *file, GFile *other_file, GFileMonitorEvent event, gpointer user_data)
{
	fprintf(fp, "something changed\n");
	fflush(fp);
	syslog(LOG_USER|LOG_INFO,"something changed\n");
	if(event == G_FILE_MONITOR_EVENT_DELETED)
	{
		//TODO: 删除记录
		fprintf(fp, "deleted: %s\n", g_file_get_path(file));
	fflush(fp);
	syslog(LOG_USER|LOG_INFO,"deleted: %s\n", g_file_get_path(file));
	}
	else if(event == G_FILE_MONITOR_EVENT_CREATED)
	{
		gchar *path = g_file_get_path(file);

		fprintf(fp, "create: %s\n", path);
	fflush(fp);
		if(g_file_test(path, G_FILE_TEST_IS_REGULAR))
		{
			gchar *filename = g_file_get_basename(file);

			FileInformation fileinfo;
			fileinfo.name = filename;
			fileinfo.pinyin = utf8_to_pinyin(filename);
			fileinfo.location = path;

			fprintf(fp, "db_insert: %s\n", filename);
	fflush(fp);
			 syslog(LOG_USER|LOG_INFO,"db_insert: %s\n", filename);
			//db_insert(&fileinfo);

			g_free(filename);
		}
		else if(g_file_test(path, G_FILE_TEST_IS_DIR))
		{
			fprintf(fp, "setup_monitor: %s\n", path);
	fflush(fp);
			syslog(LOG_USER|LOG_INFO, "setup_monitor: %s\n", path);
			setup_monitor(path);
		}

		g_free(path);
	}
}

static int 
setup_monitor(const char *path)
{
	GFileMonitor *monitor;
	GError *err = NULL;
	GFile *file;

	file = g_file_new_for_path(path);
	if(!file)
	{
		return -1;
	}

	monitor = g_file_monitor(file, G_FILE_MONITOR_NONE, NULL, &err); 
	if(err)
	{
		g_print("error: %s\n", err->message);
		syslog(LOG_USER|LOG_INFO,"error: %s\n", err->message);
		return 0;
	}

	g_signal_connect(monitor, "changed", G_CALLBACK(file_changed_cb), NULL);

	return 0;
}
#endif

static int 
setup_monitor(const char *path)
{
	MonitorNode *node;
	int wd = inotify_add_watch(handle, path, mask);

	node = g_new0(MonitorNode, 1);

	node->wd = wd;
	node->path = g_strdup(path);

	syslog(LOG_USER|LOG_INFO,"monitor: %s\n", path);

	if(wd >= 0)
	{
		g_hash_table_insert(watch_table, &(node->wd), node);
		return 0;
	}

	return -1;
}

static int
setup_subdirectory_monitor(const char *root)
{
	GDir *dir;
	GError *err = NULL;

	dir = g_dir_open(root, 0, &err);
	if(err)
	{
		return -1;
	}

	const char *file = g_dir_read_name(dir);
	while(file)
	{
		gchar *fullpath = g_build_path(G_DIR_SEPARATOR_S, root, file, NULL);

		if(g_file_test(fullpath, G_FILE_TEST_IS_DIR))
		{
			setup_monitor(fullpath);
			setup_subdirectory_monitor(fullpath);
			g_free(fullpath);
		}

		file = g_dir_read_name(dir);
	}

	g_dir_close(dir);
	return 0;
}


#if 0
int
monitor_demo_setup(const char *root)
{
	setup_monitor(root);

	if(g_thread_supported())
		g_thread_create((GThreadFunc)setup_subdirectory_monitor, (gpointer)root, FALSE, NULL);
	else
		setup_subdirectory_monitor(root);
}
#endif

static void
file_create(struct inotify_event *event)
{
	if(!event)
		return;

	int key = event->wd;
	gchar *filename = event->name;
	MonitorNode *node = (MonitorNode *)g_hash_table_lookup(watch_table, &key);

	if(!node)
		return;

	gchar *fullpath = g_build_filename(node->path, filename, NULL);

	FileInformation fileinfo;
	fileinfo.name = filename;
	fileinfo.pinyin = utf8_to_pinyin(filename);
	fileinfo.location = fullpath;

	syslog(LOG_USER|LOG_INFO,"db_insert: %s\n", filename);
	db_insert(&fileinfo);

	g_free(fullpath);
}

static void
file_delete(struct inotify_event *event)
{
	if(!event)
		return;

	int key = event->wd;
	gchar *filename = event->name;
	MonitorNode *node = (MonitorNode *)g_hash_table_lookup(watch_table, &key);

	if(!node)
		return;

	gchar *fullpath = g_build_filename(node->path, filename, NULL);

	FileInformation fileinfo;
	fileinfo.name = filename;
	fileinfo.pinyin = utf8_to_pinyin(filename);
	fileinfo.location = fullpath;

	syslog(LOG_USER|LOG_INFO,"db_delete: %s\n", filename);
	db_delete(&fileinfo);
	
	g_free(fullpath);
}

static void
dir_create(struct inotify_event *event)
{
	if(!event)
		return;

	int key = event->wd;
	gchar *filename = event->name;

	MonitorNode *node = (MonitorNode *)g_hash_table_lookup(watch_table, &key);
	if(!node)
		return;

	gchar *fullpath = g_build_filename(node->path, filename, NULL);

	setup_monitor(fullpath);

	g_free(fullpath);
}

static void                
check_valid(gpointer key, gpointer value, gpointer user_data)
{
	MonitorNode *node = (MonitorNode *)value;

	if(!node)
		return;

	if(!g_file_test(node->path, G_FILE_TEST_IS_DIR | G_FILE_TEST_EXISTS))
	{
		g_hash_table_remove(watch_table, key);
		g_free(value);
	}
}

static void
dir_delete(struct inotify_event *event)
{
	if(!event)
		return;

	g_hash_table_remove(watch_table, &(event->wd));
	//inotify_rm_watch(handle, event->wd);
	
	g_hash_table_foreach(watch_table, check_valid, NULL);
}

static void
monitor_daemon_terminate(int signo)
{
	g_hash_table_remove_all(watch_table);
	syslog(LOG_USER|LOG_INFO,"monitor daemon terminated\n");

	db_close();
	exit(0);
}

static int
monitor_database_open()
{
	GError *error = NULL;

	gchar *cfg = g_build_path(G_DIR_SEPARATOR_S, getenv("HOME"), ".lmplayer/lmplayer.cfg", NULL);

	GKeyFile *key_file = g_key_file_new();

	g_key_file_load_from_file(key_file, cfg, G_KEY_FILE_KEEP_COMMENTS, &error);
	if(error)
	{
		g_free(cfg);
		g_key_file_free(key_file);
		return -1;
	}

	gchar *dbfile = g_key_file_get_string(key_file, "search", "database", &error);
	if(error)
	{
		g_free(cfg);
		g_key_file_free(key_file);
		return -1;
	}

	gint ret = db_open(dbfile);

	g_free(dbfile);
	g_free(cfg);

	g_key_file_free(key_file);

	return ret;
}

static char *
monitor_get_path()
{
	GError *error = NULL;

	gchar *cfg = g_build_path(G_DIR_SEPARATOR_S, getenv("HOME"), ".lmplayer/lmplayer.cfg", NULL);

	GKeyFile *key_file = g_key_file_new();

	g_key_file_load_from_file(key_file, cfg, G_KEY_FILE_KEEP_COMMENTS, &error);
	if(error)
	{
		g_free(cfg);
		g_key_file_free(key_file);
		return NULL;
	}

	gchar *path = g_key_file_get_string(key_file, "monitor", "path", &error);
	if(error)
	{
		g_free(cfg);
		g_key_file_free(key_file);
		return NULL;
	}

	g_free(cfg);

	g_key_file_free(key_file);

	return path;
}

int
monitor_daemon(const char *logfile)
{
	int wd;
	char buffer[1024];
	char * offset = NULL;
	struct inotify_event * event;
	int len; 
	int tmp_len;

	if(logfile)
	{
		fp = fopen(logfile, "w+");
	}
	else
	{
		gchar *root = g_build_path(G_DIR_SEPARATOR_S, getenv("HOME"), ".lmplayer/monitor.log", NULL);
		fp = fopen(root, "w+");
		g_free(root);
	}

	handle = inotify_init();
	if(handle < 0) 
	{
		fprintf(fp, "Fail to initialize inotify.\n");
		fflush(fp);
		exit(-1);
	}

	watch_table = g_hash_table_new_full(g_int_hash, g_int_equal, NULL, g_free);
	if(!watch_table)
	{
		fprintf(fp, "Fail to new hash table.\n");
		fflush(fp);
		exit(-1);
	}

	signal(SIGTERM, monitor_daemon_terminate);
	signal(SIGINT, monitor_daemon_terminate);

	//gchar *root = g_build_path(G_DIR_SEPARATOR_S, getenv("HOME"), "音乐", NULL);
	gchar *root = monitor_get_path();
	if(root)
	{
		setup_monitor(root);
		setup_subdirectory_monitor(root);
		g_free(root);
	}
	else
	{
		exit(-1);
	}

	if(monitor_database_open() == -1)
	{
		exit(-1);
	}

	while(len = read(handle, buffer, MAX_BUF_SIZE)) 
	{
		offset = buffer;
		event = (struct inotify_event *)buffer;

		while(((char *)event - buffer) < len) 
		{
			switch(event->mask)
			{
        case IN_CREATE:
        {
					fprintf(fp, "file create %s\n", event->name);
					fflush(fp);
					file_create(event);
					break;
        }
        case IN_DELETE:
        {
					fprintf(fp, "file delete %s\n", event->name);
					fflush(fp);
					file_delete(event);
					break;
        }
				case IN_CREATE | IN_ISDIR:
					fprintf(fp, "0 dir create %s %0x %d\n", event->name, event->mask, event->mask);
					fflush(fp);
					dir_create(event);
					break;
				case IN_DELETE | IN_ISDIR:
					fprintf(fp, "0 dir delete %s %0x %d\n", event->name, event->mask, event->mask);
					fflush(fp);
					dir_delete(event);
					break;
				case IN_DELETE_SELF | IN_ISDIR:
					fprintf(fp, "0 dir delete self %s %0x %d\n", event->name, event->mask, event->mask);
					fflush(fp);
					dir_delete(event);
					break;
				case IN_MOVED_FROM:
					fprintf(fp, "file moved from %s %0x %d\n", event->name, event->mask, event->mask);
					fflush(fp);
					file_delete(event);
					break;
				case IN_MOVED_TO:
					fprintf(fp, "file move to %s %0x %d\n", event->name, event->mask, event->mask);
					fflush(fp);
					file_create(event);
					break;
				case IN_MOVED_FROM | IN_ISDIR:
					fprintf(fp, "0 dir moved from %s %0x %d\n", event->name, event->mask, event->mask);
					fflush(fp);
					dir_delete(event);
					break;
				case IN_MOVED_TO | IN_ISDIR:
					fprintf(fp, "0 dir moved to %s %0x %d\n", event->name, event->mask, event->mask);
					fflush(fp);
					dir_create(event);
					break;
        default:
					break;
			}

			tmp_len = sizeof(struct inotify_event) + event->len;
			event = (struct inotify_event *)(offset + tmp_len); 
			offset += tmp_len;
		}
	}

	return 0;
}


