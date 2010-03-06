#include "search.h"
#include <glib.h>
#include "type.h"

void
do_traversal_path(const char *root)
{
	GDir *dir;
	GError *err = NULL;

	dir = g_dir_open(root, 0, &err);
	if(err)
	{
		return;
	}

	const char *file = g_dir_read_name(dir);
	while(file)
	{
		gchar *fullpath = g_build_path(G_DIR_SEPARATOR_S, root, file, NULL);

		FileInformation fileinfo;
		fileinfo.name = file;
		fileinfo.pinyin = utf8_to_pinyin(file);
		fileinfo.location = fullpath;

		//printf("%s\n",file);
		db_insert(&fileinfo);

		if(g_file_test(fullpath, G_FILE_TEST_IS_DIR))
		{
			g_usleep(500);
			traversal_path(fullpath);
		}
		else
		{
			g_usleep(100);
		}

		file = g_dir_read_name(dir);
	}

	g_dir_close(dir);
	return;
}


int
traversal_path(const char *root)
{
	if(g_thread_supported())
		g_thread_create((GThreadFunc)do_traversal_path, (gpointer)root, FALSE, NULL);
	else
		do_traversal_path(root);

	return 0;
}

