#ifndef __PINYIN_H__
#define __PINYIN_H__  1

#include <glib.h>

gchar * utf8_to_pinyin(const gchar *utf8_str);

gchar * gb2312_to_pinyin(const gchar *gb2312_str);

#endif /*__PINYIN_H__ */
