#ifndef __DATABASE_H__
#define __DATABASE_H__  1

#include "type.h"
#include <glib-object.h>

G_BEGIN_DECLS

#define LMPLAYER_TYPE_DATABASE (lmplayer_database_get_type ())
#define LMPLAYER_DATABASE(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), LMPLAYER_TYPE_DATABASE, LmplayerDatabase))
#define LMPLAYER_DATABASE_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), LMPLAYER_TYPE_DATABASE, LmplayerDatabaseClass))
#define LMPLAYER_IS_DATABASE(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), LMPLAYER_TYPE_DATABASE))
#define LMPLAYER_IS_DATABASE_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), LMPLAYER_TYPE_DATABASE))
#define LMPLAYER_DATABASE_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), LMPLAYER_TYPE_DATABASE, LmplayerDatabaseClass))

typedef int (*DBQueryCallback) (void*, int, char**, char**);
typedef struct _LmplayerDatabasePrivate LmplayerDatabasePrivate;

typedef struct 
{
  GObject parent;
  LmplayerDatabasePrivate *priv;
} LmplayerDatabase;

typedef struct
{
  GObjectClass parent;
} LmplayerDatabaseClass;



G_END_DECLS

LmplayerDatabase *lmplayer_database_new ();

int lmplayer_database_open(LmplayerDatabase *self, const char *filename);
int lmplayer_database_insert(LmplayerDatabase *self, LmplayerDatabaseItem *info);
int lmplayer_database_delete(LmplayerDatabase *self, LmplayerDatabaseItem *info);
int lmplayer_database_delete_all(LmplayerDatabase *self);
int lmplayer_database_query(LmplayerDatabase *self, const char *query, DBQueryCallback callback, gpointer user_data);
void lmplayer_database_close(LmplayerDatabase *self);

#endif /*__DATABASE_H__ */
