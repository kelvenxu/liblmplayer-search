#ifndef __TYPE_H__
#define __TYPE_H__  1

#include <glib.h>

#define FILE_INFORMATION_N 7

typedef struct _FileInformation
{
	gchar *name;
	gchar *pinyin;
	gchar *type;
	gchar *artist;
	gchar *special;
	gchar *rank;
	gchar *location;
} FileInformation;

#endif /*__TYPE_H__ */
