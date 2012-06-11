
#include "lmplayer-database.h"
#include <sqlite3.h>
#include <glib.h>

const char* table_name = "files";

G_DEFINE_TYPE (LmplayerDatabase, lmplayer_database, G_TYPE_OBJECT);

#define LMPLAYER_DATABASE_GET_PRIVATE(o)\
  (G_TYPE_INSTANCE_GET_PRIVATE ((o), LMPLAYER_TYPE_DATABASE, LmplayerDatabasePrivate))

struct _LmplayerDatabasePrivate {
  sqlite3 *handle;
  //char *table_name;
};


static void
lmplayer_database_dispose (LmplayerDatabase *self)
{
  LmplayerDatabasePrivate *priv;

  priv = LMPLAYER_DATABASE_GET_PRIVATE (self);

  if (priv->handle)
  {
    sqlite3_close (priv->handle);
    priv->handle = NULL;
  }
}

static void
lmplayer_database_finalize (LmplayerDatabase *self)
{
}

static void
lmplayer_database_init (LmplayerDatabase *self)
{
  LmplayerDatabasePrivate *priv;

  priv = LMPLAYER_DATABASE_GET_PRIVATE (self);

  priv->handle = NULL;
}

static void
lmplayer_database_class_init (LmplayerDatabaseClass *self_class)
{
  GObjectClass *object_class = G_OBJECT_CLASS (self_class);

  g_type_class_add_private (self_class, sizeof (LmplayerDatabasePrivate));
  object_class->dispose = (void (*) (GObject *object)) lmplayer_database_dispose;
  object_class->finalize = (void (*) (GObject *object)) lmplayer_database_finalize;
}

static gboolean
lmplayer_database_table_exist(LmplayerDatabase *self)
{
	int ret;
	char *err;
	char *cmd;

  LmplayerDatabasePrivate *priv;

  priv = LMPLAYER_DATABASE_GET_PRIVATE (self);

#if 1
	// 判断表是否存在
	cmd = g_strdup_printf("select * from sqlite_master where type = 'table' and name = '%s'", table_name);
	ret = sqlite3_exec(priv->handle, cmd, NULL, NULL, &err);
	g_free(cmd);

	if(ret == SQLITE_OK && err == NULL)
		return 0;
#endif
}

int
lmplayer_database_open(LmplayerDatabase *self, const char *filename)
{
	int ret;
	char *err = NULL;
	char *cmd = NULL;

  LmplayerDatabasePrivate *priv;

  priv = LMPLAYER_DATABASE_GET_PRIVATE (self);

  printf("%s filename:%s\n", __func__, filename);
	ret = sqlite3_open(filename, &(priv->handle));

	if(ret != SQLITE_OK || priv->handle == NULL)
  {
    return;
  }

#if 0
	// 判断表是否存在
	cmd = g_strdup_printf("select * from sqlite_master where type = 'table' and name = '%s'", table_name);
	ret = sqlite3_exec(handle, cmd, NULL, NULL, &err);
	g_free(cmd);

	if(ret == SQLITE_OK && err == NULL)
		return 0;
#endif

	// 如果表不存在，就先创建表
	cmd = g_strdup_printf("create table %s (name TEXT, pinyin TEXT, type TEXT, artist TEXT, special TEXT, rank TEXT, location TEXT not null primary key)", table_name);

	ret = sqlite3_exec(priv->handle, cmd, NULL, NULL, &err);
	g_free(cmd);

	if(ret != SQLITE_OK)
	{
		if(err)
		{
			g_print("database error: %s\n", err);
			sqlite3_free(err);
		}
	}

	return 0;
}

int 
lmplayer_database_insert(LmplayerDatabase *self, LmplayerDatabaseItem *fileinfo)
{
	char *cmd;
	int ret;
	char *err;

  LmplayerDatabasePrivate *priv;

  priv = LMPLAYER_DATABASE_GET_PRIVATE (self);

	if(!fileinfo)
		return -1;

	cmd = g_strdup_printf("insert into %s (name, pinyin, location) values('%s', '%s', '%s')", 
			table_name, 
			fileinfo->name, 
			fileinfo->pinyin,
			fileinfo->location);

	ret = sqlite3_exec(priv->handle, cmd, NULL, NULL, &err);
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
lmplayer_database_delete(LmplayerDatabase *self, LmplayerDatabaseItem *fileinfo)
{
	char *cmd;
	int ret;
	char *err;

  LmplayerDatabasePrivate *priv;

  priv = LMPLAYER_DATABASE_GET_PRIVATE (self);

	if(!fileinfo)
		return -1;

	cmd = g_strdup_printf("delete from %s where location = '%s'", table_name, fileinfo->location);

	ret = sqlite3_exec(priv->handle, cmd, NULL, NULL, &err);
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
lmplayer_database_delete_all(LmplayerDatabase *self)
{
	char *cmd;
	int ret;
	char *err;

  LmplayerDatabasePrivate *priv;

  priv = LMPLAYER_DATABASE_GET_PRIVATE (self);

	cmd = g_strdup_printf("delete from %s", table_name);

	ret = sqlite3_exec(priv->handle, cmd, NULL, NULL, &err);
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
lmplayer_database_query(LmplayerDatabase *self, const char *query, DBQueryCallback callback, gpointer user_data)
{
	char *cmd = NULL;
	char *err = NULL;

  LmplayerDatabasePrivate *priv;

  priv = LMPLAYER_DATABASE_GET_PRIVATE (self);

	if(!query)
		return -1;

	cmd = g_strdup_printf("select * from %s where pinyin like '%%%s%%'\n", table_name, query);

	g_print("%s\n", cmd);
	int ret = sqlite3_exec(priv->handle, cmd, callback, user_data, &err);
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
lmplayer_database_close(LmplayerDatabase *self)
{
  LmplayerDatabasePrivate *priv;

  priv = LMPLAYER_DATABASE_GET_PRIVATE (self);

	sqlite3_close(priv->handle);
}

LmplayerDatabase *
lmplayer_database_new ()
{
  return g_object_new (LMPLAYER_TYPE_DATABASE, NULL);
}
