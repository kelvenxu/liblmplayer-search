
#include "database.h"
#include <sqlite3.h>
#include <glib.h>

static sqlite3 *handle;
static char* table_name = "files";

int
db_open(const char *filename)
{
	int ret;
	char *err;
	char *cmd;

	ret = sqlite3_open(filename, &handle);

	if(g_file_test(filename, G_FILE_TEST_IS_REGULAR))
		return ret;

	cmd = g_strdup_printf("create table %s (name TEXT, pinyin TEXT, type TEXT, artist TEXT, special TEXT, rank TEXT, location TEXT)", table_name);

	ret = sqlite3_exec(handle, cmd, NULL, NULL, &err);
	if(ret != SQLITE_OK)
	{
		if(err)
		{
			g_print("database error: %s\n", err);
			sqlite3_free(err);
		}
	}

	g_free(cmd);

	return ret;
}

int 
db_insert(FileInformation *fileinfo)
{
	char *cmd;
	int ret;
	char *err;

	cmd = g_strdup_printf("insert into %s (name, pinyin, location) values('%s', '%s', '%s')", 
			table_name, 
			fileinfo->name, 
			fileinfo->pinyin,
			fileinfo->location);

	//g_print("%s\n", cmd);

	ret = sqlite3_exec(handle, cmd, NULL, NULL, &err);
	if(ret != SQLITE_OK)
	{
		if(err)
		{
			g_print("database error: %s\n", err);
			sqlite3_free(err);
		}
	}

	g_free(cmd);
	return ret;
}

int
db_query(const char *query, DBQueryCallback callback, gpointer user_data)
{
	char *cmd;
	char *err;
	cmd = g_strdup_printf("select * from %s where pinyin like '%%%s%%'\n", table_name, query);

	g_print("%s\n", cmd);
	int ret = sqlite3_exec(handle, cmd, callback, user_data, &err);
	if(ret != SQLITE_OK)
	{
		if(err)
		{
			g_print("database error: %s\n", err);
			sqlite3_free(err);
		}
	}

	g_free(cmd);

	return ret;
}

void
db_close()
{
	sqlite3_close(handle);
}

