#include "view.h"

static GtkWidget *view;

GtkWidget *
search_view_create()
{
	GtkTreeViewColumn *col;
	GtkCellRenderer *renderer;
	GtkListStore *liststore;
	//GtkWidget *view;

	view = gtk_tree_view_new();

	gtk_tree_view_set_headers_visible(GTK_TREE_VIEW(view), FALSE);

	col = gtk_tree_view_column_new();
	gtk_tree_view_append_column(GTK_TREE_VIEW(view), col);

	renderer = gtk_cell_renderer_text_new();

	gtk_tree_view_column_pack_start(col, renderer, TRUE);
	gtk_tree_view_column_add_attribute(col, renderer, "text", 0);

	liststore = gtk_list_store_new(1, G_TYPE_STRING);

	gtk_tree_view_set_model(GTK_TREE_VIEW(view), GTK_TREE_MODEL(liststore));

	g_object_unref(liststore);


	return view;
}

void
//search_view_clear(GtkWidget *view)
search_view_clear()
{
	GtkListStore *liststore = (GtkListStore *)gtk_tree_view_get_model(GTK_TREE_VIEW(view));
	gtk_list_store_clear(liststore);
}

void
//search_view_insert(GtkWidget *view, FileInformation *fileinfo)
search_view_insert(FileInformation *fileinfo)
{
	static GtkListStore *liststore;
	GtkTreeIter iter;

	if(!fileinfo)
		return;

	if(!liststore)
		liststore = GTK_LIST_STORE(gtk_tree_view_get_model(GTK_TREE_VIEW(view)));
	
	if(!liststore)
		return;

	gtk_list_store_append(liststore, &iter);

	gtk_list_store_set(liststore, &iter, 
			0, fileinfo->name,
			-1);
}

