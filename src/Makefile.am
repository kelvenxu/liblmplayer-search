autostartdir = $(sysconfdir)/xdg/autostart
autostart_in_files = lmplayer-search-daemon-autostart.desktop.in
autostart_DATA = $(autostart_in_files:.desktop.in=.desktop)
@INTLTOOL_DESKTOP_RULE@

bin_PROGRAMS = search lmplayer-search-daemon search-library-test
lib_LTLIBRARIES = libsearchlibrary.la

headers = \
	search-library.h \
	database.h \
	monitor.h \
	pinyin.h \
	small-search.h \
	type.h \
	view.h\
	search-box.h

sources = \
	search-library.c\
	database.c\
	pinyin.c\
	view.c\
	small-search.c \
	monitor.c\
	search-box.c

search_SOURCES = main.c 
search_LDADD = $(PACKAGE_LIBS) $(top_builddir)/src/libsearchlibrary.la
search_CPPFLAGS = -I$(top_builddir) $(PACKAGE_CFLAGS)

lmplayer_search_daemon_SOURCES = daemon-main.c
lmplayer_search_daemon_LDADD = $(PACKAGE_LIBS) $(top_builddir)/src/libsearchlibrary.la
lmplayer_search_daemon_CPPFLAGS = -I$(top_builddir) $(PACKAGE_CFLAGS) 

search_library_test_SOURCES = test-main.c
search_library_test_LDADD = $(PACKAGE_LIBS) $(top_builddir)/src/libsearchlibrary.la
search_library_test_CPPFLAGS = -I$(top_builddir) $(PACKAGE_CFLAGS)

libsearchlibrary_la_SOURCES = $(sources) $(headers)
libsearchlibrary_la_LIBADD = $(PACKAGE_LIBS)
libsearchlibrary_la_CPPFLAGS = -I$(top_builddir) $(PACKAGE_CFLAGS) -DGCONF_PREFIX="\"/apps/lmplayer\""

libsearchlibraryincdir = $(includedir)/libsearchlibrary
libsearchlibraryinc_HEADERS = $(headers)

EXTRA_DIST = \
	$(autostart_DATA)
