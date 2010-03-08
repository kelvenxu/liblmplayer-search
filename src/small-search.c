
#include <glib.h>
#include "small-search.h"
#include "type.h"
#include "pinyin.h"

static gchar *cur_root;
static GQueue *queue;
static GMainLoop *loop = NULL;

static void push_path(const char *path);
static const char * pop_path();
static GDir * start_new_path();
static void analysis_file(const char *file);
static gboolean small_search_step();
static void small_search_start_loop(const char *root);

static void
push_path(const char *path)
{
	if(!queue)
	{
		queue = g_queue_new();
	}

	if(queue)
	{
		g_queue_push_tail(queue, (gpointer)g_strdup(path));
	}
}

static const char *
pop_path()
{
	if(queue)
	{
		return g_queue_pop_head(queue);
	}
	else
		return NULL;
}

// 在新的线程中做索引文件, 生成filelist表
static GDir *
start_new_path()
{
	GDir *dir;
	GError *err = NULL;

	cur_root = pop_path();
	printf("cur_root: %s\n", cur_root);

	if(cur_root)
	{
		dir = g_dir_open(cur_root, 0, &err);
		if(err)
		{
			return dir;
		}
	}
	else
	{
		small_search_stop();
		return NULL;
	}
}

static void
analysis_file(const char *file)
{
	FileInformation fileinfo;

	if(file)
	{
		fileinfo.name = g_path_get_basename(file);
		fileinfo.pinyin = utf8_to_pinyin(file);
		fileinfo.type = NULL;
		fileinfo.artist = NULL;
		fileinfo.special = NULL;
		fileinfo.rank = NULL;
		fileinfo.location = (char *)file;

		printf("%s\n",file);
		db_insert(&fileinfo);

		g_free(fileinfo.name);
		g_free(fileinfo.pinyin);
	}
}

// 在idle中做，每次处理一个文件
static gboolean 
small_search_step()
{
	static GDir *dir = NULL;

	if(!g_main_loop_is_running(loop))
		return FALSE;

	if(!dir)
	{
		dir = start_new_path();
	}

	if(dir)
	{
		const char *file = g_dir_read_name(dir);
		if(file)
		{
			printf("file: %s\n", file);
			gchar *fullpath = g_build_path(G_DIR_SEPARATOR_S, cur_root, file, NULL);

			if(g_file_test(fullpath, G_FILE_TEST_IS_DIR))
			{
				push_path(fullpath);
			}
			else if(g_file_test(fullpath, G_FILE_TEST_IS_REGULAR))
			{
				analysis_file(fullpath);
			}

			g_free(fullpath);
		}
		else
		{
			g_dir_close(dir);
			dir = NULL;
		}
	}
	else
	{
		return FALSE;
	}

	return TRUE;
}

void
small_search_start_loop(const char *root)
{
	loop = g_main_loop_new(NULL, FALSE);

	push_path(root);
	g_timeout_add(500, small_search_step, NULL);

	g_main_loop_run(loop);
}

void 
small_search_stop()
{
	g_main_loop_quit(loop);
	
	// free something
}

int
small_search_start(const char *root)
{
	if(g_thread_supported())
		g_thread_create((GThreadFunc)small_search_start_loop, (gpointer)root, FALSE, NULL);

	return 0;
}

