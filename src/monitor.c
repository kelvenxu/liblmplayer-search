#include "monitor.h"
#include "database.h"
#include "pinyin.h"
#include <glib.h>
#include <gio/gio.h>

static int setup_monitor(const char *path);

static void
file_changed_cb(GFileMonitor *monitor, GFile *file, GFile *other_file, GFileMonitorEvent event, gpointer user_data)
{
	if(event == G_FILE_MONITOR_EVENT_DELETED)
	{
		//TODO: 删除记录
		g_print("deleted: %s\n", g_file_get_path(file));
	}
	else if(event == G_FILE_MONITOR_EVENT_CREATED)
	{
		gchar *path = g_file_get_path(file);

		printf("create: %s\n", path);
		if(g_file_test(path, G_FILE_TEST_IS_REGULAR))
		{
			gchar *filename = g_file_get_basename(file);

			FileInformation fileinfo;
			fileinfo.name = filename;
			fileinfo.pinyin = utf8_to_pinyin(filename);
			fileinfo.location = path;

			printf("db_insert: %s\n", filename);
			db_insert(&fileinfo);

			g_free(filename);
		}
		else if(g_file_test(path, G_FILE_TEST_IS_DIR))
		{
			printf("setup_monitor: %s\n", path);
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
		return 0;
	}

	g_signal_connect(monitor, "changed", G_CALLBACK(file_changed_cb), NULL);

	return 0;
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


int
monitor_demo_setup(const char *root)
{
	setup_monitor(root);

	if(g_thread_supported())
		g_thread_create((GThreadFunc)setup_subdirectory_monitor, (gpointer)root, FALSE, NULL);
	else
		setup_subdirectory_monitor(root);
}

