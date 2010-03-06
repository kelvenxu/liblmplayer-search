bin_PROGRAMS = search

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

libsearchlibrary_la_SOURCES = $(sources) $(headers)
libsearchlibrary_la_LIBADD = $(PACKAGE_LIBS)
libsearchlibrary_la_CPPFLAGS = -I$(top_builddir) $(PACKAGE_CFLAGS)

libsearchlibraryincdir = $(includedir)/libsearchlibrary
libsearchlibraryinc_HEADERS = $(headers)

