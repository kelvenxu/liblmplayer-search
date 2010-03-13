/* vi: set sw=4 ts=4: */
/*
 * search.h
 *
 * This file is part of liblmplayer-search.
 *
 * Copyright (C) 2010 - kelvenxu <kelvenxu@gmail.com>.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place, Suite 330,
 * Boston, MA 02111-1307, USA.
 * */

#include "search.h"
#include <glib.h>
#include "type.h"

static gchar *root_path;
static gboolean index_start = FALSE;

void
do_traversal_path(const char *root)
{
	GDir *dir;
	GError *err = NULL;

	dir = g_dir_open(root, 0, &err);
	if(err)
	{
		g_print("g_dir_open: %s\n", err->message);
		index_start = FALSE;
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

		//g_print("%s\n",file);
		db_insert(&fileinfo);

		if(g_file_test(fullpath, G_FILE_TEST_IS_DIR))
		{
			//g_usleep(500);
			do_traversal_path(fullpath);
		}
		else
		{
			//g_usleep(100);
		}

		file = g_dir_read_name(dir);
	}

	g_dir_close(dir);

	index_start = FALSE;
	return;
}


#if 0
int
traversal_path(const char *root)
{
	if(g_thread_supported())
		g_thread_create((GThreadFunc)do_traversal_path, (gpointer)root, FALSE, NULL);
	else
		do_traversal_path(root);

	return 0;
}
#endif

int
lmplayer_search_index(const char *root)
{
	if(index_start)
		return 1;

 	root_path = g_strdup(root); // FIXME:

	if(g_thread_supported())
		g_thread_create((GThreadFunc)do_traversal_path, (gpointer)root_path, FALSE, NULL);
	else
		do_traversal_path(root);

	return 0;
}

