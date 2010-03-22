#autostartdir = $(sysconfdir)/xdg/autostart
#autostart_in_files = lmplayer-search-daemon-autostart.desktop.in
#autostart_DATA = $(autostart_in_files:.desktop.in=.desktop)
##@INTLTOOL_DESKTOP_RULE@

lib_LTLIBRARIES = liblmplayer-search.la

#noinst_PROGRAMS = search lmplayer-search-daemon search-library-test

LINK = $(LIBTOOL) --mode=link $(CC) $(CFLAGS) $(LDFLAGS) $(PACKAGE_LIBS) -o $@
INCLUDES = $(CFLAGS) -I$(top_builddir) -I$(top_srcdir)

headers = \
	search-library.h \
	database.h \
	monitor.h \
	pinyin.h \
	small-search.h \
	search.h\
	type.h \
	view.h\
	search-box.h

sources = \
	search-library.c\
	database.c\
	pinyin.c\
	view.c\
	small-search.c \
	search.c \
	monitor.c\
	search-box.c

#search_SOURCES = main.c 
#search_LDADD = $(PACKAGE_LIBS) $(top_builddir)/src/liblmplayer-search.la
#search_CPPFLAGS = -I$(top_builddir) $(PACKAGE_CFLAGS)

#lmplayer_search_daemon_SOURCES = daemon-main.c
#lmplayer_search_daemon_LDADD = $(PACKAGE_LIBS) $(top_builddir)/src/liblmplayer-search.la
#lmplayer_search_daemon_CPPFLAGS = -I$(top_builddir) $(PACKAGE_CFLAGS) 

#search_library_test_SOURCES = test-main.c
#search_library_test_LDADD = $(PACKAGE_LIBS) $(top_builddir)/src/liblmplayer-search.la
#search_library_test_CPPFLAGS = -I$(top_builddir) $(PACKAGE_CFLAGS)

liblmplayer_search_la_SOURCES = $(sources) $(headers)
liblmplayer_search_la_CFLAGS = $(AM_CFLAGS) -I$(top_builddir) $(PACKAGE_CFLAGS) -DGCONF_PREFIX="\"/apps/lmplayer\""
liblmplayer_search_la_LDFLAGS = \
	-version-info $(LIBLMPLAYER_SEARCH_CURRENT):$(LIBLMPLAYER_SEARCH_REVISION):$(LIBLMPLAYER_SEARCH_AGE)\
	-no-undefined\
	-export-symbols-regex "^[^_].*"
liblmplayer_search_la_LIBADD = $(PACKAGE_LIBS)


liblmplayer_searchincludedir = $(pkgincludedir)
liblmplayer_searchinclude_HEADERS = $(headers)

EXTRA_DIST =  $(autostart_DATA)
