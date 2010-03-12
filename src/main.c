#include <glib.h>
#include <stdlib.h>
#include <gtk/gtk.h>
#include <string.h>
#include "search-library.h"

int query_callback(void *noused, int ncols, char** value, char** name)
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

void text_changed_cb(GtkEntryBuffer *entrybuffer,
		guint           arg1,
		gchar          *arg2,
		guint           arg3,
		gpointer        user_data)
{
	const char *str = gtk_entry_buffer_get_text(entrybuffer);
	if(strlen(str) >= 3)
	{
		search_view_clear();
		db_query(str, query_callback, NULL);
	}
}

static void
win_quit(GtkWidget *widget, GdkEvent *event, gpointer user_data)
{
	gtk_main_quit();

	search_library_quit();
}

static void
entry_activated_cb(LmplayerSearchBox *box, gpointer user_data)
{
	printf("lmplayer search box activated\n");
}

int main(int argc, char *argv[])
{
	gtk_init(&argc, &argv);


	GtkWidget *win = gtk_window_new(GTK_WINDOW_TOPLEVEL);

	//GtkEntryBuffer *buffer = gtk_entry_buffer_new(NULL, -1);
	GtkWidget *vbox = gtk_vbox_new(FALSE, 6);
	//GtkWidget *entry = gtk_entry_new_with_buffer(buffer);
	GtkWidget *entry = lmplayer_search_box_new();
	g_signal_connect(entry, "activated", G_CALLBACK(entry_activated_cb), NULL);

	GtkWidget *scrollwin = gtk_scrolled_window_new(NULL, NULL);
	gtk_scrolled_window_set_policy(GTK_SCROLLED_WINDOW(scrollwin), GTK_POLICY_AUTOMATIC, GTK_POLICY_AUTOMATIC);
	GtkWidget *view = search_view_create();

	gtk_container_add(GTK_CONTAINER(scrollwin), view);

	gtk_box_pack_start(GTK_BOX(vbox), entry, FALSE, FALSE, 0);
	gtk_box_pack_start(GTK_BOX(vbox), scrollwin, TRUE, TRUE, 0);

	gtk_container_add(GTK_CONTAINER(win), vbox);

	//g_signal_connect(buffer, "inserted-text", G_CALLBACK(text_changed_cb), NULL);
	g_signal_connect(win, "destroy", G_CALLBACK(win_quit), NULL);

	gtk_widget_show_all(win);

	search_library_init("/home/kelvenxu/.lmplayer/media.database", "/home/kelvenxu/音乐");
	gtk_main();

	printf("after gtk_main_quit\n");
	search_library_quit();
	return 0;
}

