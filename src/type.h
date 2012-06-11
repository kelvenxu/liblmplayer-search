#ifndef __TYPE_H__
#define __TYPE_H__  1

#include <glib.h>

#define FILE_INFORMATION_N 7

typedef struct _LmplayerDatabaseItem
{
	gchar *name;
	gchar *pinyin;
	gchar *type;
	gchar *artist;
	gchar *special;
	gchar *rank;
	gchar *location;
} LmplayerDatabaseItem;

#endif /*__TYPE_H__ */
