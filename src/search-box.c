/* vi: set sw=4 ts=4: */
/*
 * search-box.c
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

#include "type.h"
#include "search-box.h"
#include <string.h>

G_DEFINE_TYPE(LmplayerSearchBox, lmplayer_search_box, GTK_TYPE_ENTRY);

#define LMPLAYER_SEARCH_BOX_GET_PRIVATE(o)\
	(G_TYPE_INSTANCE_GET_PRIVATE((o), LMPLAYER_SEARCH_BOX_TYPE, LmplayerSearchBoxPrivate))

enum {
	ACTIVATED,
	LAST_SIGNAL
};

static guint signals[LAST_SIGNAL] = { 0 };

struct _LmplayerSearchBoxPrivate 
{
	GtkEntryBuffer *buffer;
};

static int query_callback(void *noused, int ncols, char** value, char** name);
static void do_query(const char *str, LmplayerSearchBox *box);
static void text_changed_cb(GtkEntryBuffer *entrybuffer, guint arg1, gchar *arg2, guint arg3, LmplayerSearchBox *box);
static void icon_release_cb(GtkEntry *entry, GtkEntryIconPosition icon_pos, GdkEvent *event, LmplayerSearchBox *box);
static gboolean key_release_cb(GtkEntry *entry, GdkEventKey *event, LmplayerSearchBox *box);

static void
lmplayer_search_box_dispose(LmplayerSearchBox *self)
{
}

static void
lmplayer_search_box_finalize(LmplayerSearchBox *self)
{
}

static void
lmplayer_search_box_init(LmplayerSearchBox *self)
{
	LmplayerSearchBoxPrivate *priv;

	priv = LMPLAYER_SEARCH_BOX_GET_PRIVATE(self);

	GtkEntry *entry = GTK_ENTRY(self);

	priv->buffer = gtk_entry_buffer_new(NULL, -1);
	gtk_entry_set_buffer(entry, priv->buffer);

	gtk_entry_set_icon_from_stock(entry, GTK_ENTRY_ICON_PRIMARY, "gtk-clear");
	gtk_entry_set_icon_from_stock(entry, GTK_ENTRY_ICON_SECONDARY, "gtk-find");

	g_signal_connect(priv->buffer, "inserted-text", G_CALLBACK(text_changed_cb), self);
	g_signal_connect(entry, "icon-release", G_CALLBACK(icon_release_cb), self);
	g_signal_connect(entry, "key-release-event", G_CALLBACK(key_release_cb), self);
}

static void
lmplayer_search_box_class_init(LmplayerSearchBoxClass *self_class)
{
	GObjectClass *object_class = G_OBJECT_CLASS(self_class);

	g_type_class_add_private(self_class, sizeof(LmplayerSearchBoxPrivate));
	object_class->dispose = (void (*)(GObject *object))lmplayer_search_box_dispose;
	object_class->finalize = (void (*)(GObject *object))lmplayer_search_box_finalize;

	signals[ACTIVATED] = 
		g_signal_new("activated",
				G_OBJECT_CLASS_TYPE(self_class),
				G_SIGNAL_RUN_LAST | G_SIGNAL_ACTION,
				G_STRUCT_OFFSET(LmplayerSearchBoxClass, activated),
				NULL,
				NULL,
				//_gtk_marshal_VOID__VOID,
				g_cclosure_marshal_VOID__VOID,
				G_TYPE_NONE,
				0);
}

static int 
query_callback(void *noused, int ncols, char** value, char** name)
{
	//FileInformation fileinfo;
	LmplayerDatabaseItem fileinfo;

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
do_query(const char *str, LmplayerSearchBox *box)
{
	// FIXME: 当至少有两个字符时，才进行搜索
	if(str && strlen(str) >= 2) 
	{
		search_view_clear();
		db_query(str, query_callback, NULL);
		g_signal_emit(box, signals[ACTIVATED], 0);
	}
}

static void 
text_changed_cb(GtkEntryBuffer *entrybuffer, guint arg1, gchar *arg2, guint arg3, LmplayerSearchBox *box)
{
	const char *str = gtk_entry_buffer_get_text(entrybuffer);
	if(str && strlen(str) >= 3)
	{
		do_query(str, box);
	}
}

static void 
icon_release_cb(GtkEntry *entry, GtkEntryIconPosition icon_pos, GdkEvent *event, LmplayerSearchBox *box)
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
				{
					do_query(str, box);
				}
			}
			break;
		default:
			break;
	}
}

static gboolean
key_release_cb(GtkEntry *entry, GdkEventKey *event, LmplayerSearchBox *box)
{
	GtkEntryBuffer *buffer = gtk_entry_get_buffer(entry);
	const char *str = gtk_entry_buffer_get_text(buffer);

	if(str)
	{
		do_query(str, box);
	}
}

GtkWidget *
lmplayer_search_box_new()
{
	return g_object_new(LMPLAYER_SEARCH_BOX_TYPE, NULL);
}

