#include "search-library.h"

void 
search_library_init(const char *db, const char *root)
{
	if(!g_thread_supported()) 
		g_thread_init (NULL);

	db_open(db);

	small_search_start(root);

	monitor_demo_setup("/home/kelvenxu/音乐");
}

void
search_library_quit()
{
	small_search_stop();
	db_close();
}

