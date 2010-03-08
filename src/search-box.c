/* vi: set sw=4 ts=4: */
/*
 * search-box.c
 *
 * This file is part of libsearchlibrary.
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

#include "type.h"
#include "search-box.h"
#include <string.h>

int 
query_callback(void *noused, int ncols, char** value, char** name)
{
	FileInformation fileinfo;

	// 调用一次返回一行的查询结果
	fileinfo.name = value[0];
	fileinfo.pinyin = value[1];
	fileinfo.type = value[2];
	fileinfo.artist = value[3];
	fileinfo.special = value[4];
	fileinfo.rank = value[5];
	fileinfo.location = value[6];

	search_view_insert(&fileinfo);

	return 0;
}

static void
do_query(const char *str)
{
	// FIXME: 当至少有两个字符时，才进行搜索
	if(str && strlen(str) >= 2) 
		db_query(str, query_callback, NULL);
}

static void 
text_changed_cb(GtkEntryBuffer *entrybuffer,
		guint           arg1,
		gchar          *arg2,
		guint           arg3,
		gpointer        user_data)
{
	const char *str = gtk_entry_buffer_get_text(entrybuffer);
	if(str && strlen(str) >= 3)
	{
		search_view_clear();
		do_query(str);
	}
}

static void 
icon_release_cb(GtkEntry *entry, GtkEntryIconPosition icon_pos, GdkEvent *event, gpointer user_data)
{
	GtkEntryBuffer *buffer = gtk_entry_get_buffer(entry);

	switch(icon_pos)
	{
		case GTK_ENTRY_ICON_PRIMARY: 
			gtk_entry_buffer_delete_text(buffer, 0, -1);
			break;
		case GTK_ENTRY_ICON_SECONDARY:
			{
				const char *str = gtk_entry_buffer_get_text(buffer);
				if(str)
					do_query(str);
			}
			break;
		default:
			break;
	}
}

static gboolean
key_release_cb(GtkEntry *entry, GdkEventKey *event, gpointer user_data)
{
	GtkEntryBuffer *buffer = gtk_entry_get_buffer(entry);
	const char *str = gtk_entry_buffer_get_text(buffer);

	if(str)
		do_query(str);
}

GtkWidget *
search_box_create()
{
	GtkEntryBuffer *buffer = gtk_entry_buffer_new(NULL, -1);
	GtkWidget *entry = gtk_entry_new_with_buffer(buffer);

	gtk_entry_set_icon_from_stock(GTK_ENTRY(entry), GTK_ENTRY_ICON_PRIMARY, "gtk-clear");
	gtk_entry_set_icon_from_stock(GTK_ENTRY(entry), GTK_ENTRY_ICON_SECONDARY, "gtk-find");

	g_signal_connect(buffer, "inserted-text", G_CALLBACK(text_changed_cb), NULL);
	g_signal_connect(entry, "icon-release", G_CALLBACK(icon_release_cb), NULL);
	g_signal_connect(entry, "key-release-event", G_CALLBACK(key_release_cb), NULL);
	return entry;
}

