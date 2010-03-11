#ifndef __DATABASE_H__
#define __DATABASE_H__  1

#include "type.h"

typedef int (*DBQueryCallback) (void*, int, char**, char**);

int db_open(const char *filename);
int db_insert(FileInformation *fileinfo);
int db_delete(FileInformation *fileinfo);
int db_delete_all();
int db_query(const char *query, DBQueryCallback callback, gpointer user_data);
void db_close();

#endif /*__DATABASE_H__ */
