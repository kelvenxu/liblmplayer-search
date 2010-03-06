#ifndef __SEARCH_LIBRARY_H__
#define __SEARCH_LIBRARY_H__  1

#include "database.h"
#include "monitor.h"
#include "pinyin.h"
#include "type.h"
#include "view.h"
#include "small-search.h"

void search_library_init(const char *db, const char *root);
void search_library_quit();

#endif /*__SEARCH_LIBRARY_H__ */
