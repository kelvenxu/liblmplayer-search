
#ifndef __VIEW_H__
#define __VIEW_H__  1

#include <gtk/gtk.h>
#include "type.h"

GtkWidget * search_view_create();
void search_view_clear();
void search_view_insert(FileInformation *fileinfo);

#endif /*__VIEW_H__ */
