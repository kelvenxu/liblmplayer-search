#include "search-library.h"

static LmplayerDatabase *dbobj = NULL;
void 
search_library_init(const char *dbfilename, const char *root)
{
	if(!g_thread_supported()) 
		g_thread_init (NULL);

  dbobj = lmplayer_database_new ();

  printf("%s db: %s root: %s\n", __func__, dbfilename, root);
	lmplayer_database_open(dbobj, dbfilename);

	//small_search_start(root);
	//monitor_demo_setup("/home/kelvenxu/音乐");
}

void
search_library_quit()
{
	//small_search_stop();
	lmplayer_database_close(dbobj);
}

