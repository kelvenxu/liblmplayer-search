AC_PREREQ(2.52)

m4_define(lmplayer_version_major, 0)
m4_define(lmplayer_version_minor, 10)
m4_define(lmplayer_version_micro, 0)

AC_INIT([liblmplayer-search],
        [lmplayer_version_major.lmplayer_version_minor.lmplayer_version_micro],
        [http://www.lmplayer.org])

AM_CONFIG_HEADER(config.h)

AC_CONFIG_SRCDIR([src/main.c])
AM_INIT_AUTOMAKE([1.9 dist-bzip2 no-dist-gzip check-news subdir-objects])

AM_MAINTAINER_MODE

AC_PROG_INTLTOOL([0.21])

LIBLMPLAYER_SEARCH_VERSION_MAJOR=lmplayer_version_major
LIBLMPLAYER_SEARCH_VERSION_MINOR=lmplayer_version_minor
LIBLMPLAYER_SEARCH_VERSION_MICRO=lmplayer_version_micro
AC_SUBST(LIBLMPLAYER_SEARCH_VERSION_MAJOR)
AC_SUBST(LIBLMPLAYER_SEARCH_VERSION_MINOR)
AC_SUBST(LIBLMPLAYER_SEARCH_VERSION_MICRO)

AC_PROG_CC
AM_PROG_CC_C_O
AC_PROG_CXX
AC_ISC_POSIX
AC_HEADER_STDC
AM_PROG_LIBTOOL

GTK_REQUIRED=2.18.0
GLIB_REQUIRED=2.22.0
GIO_REQUIRED=2.22.0
GTHREAD_REQUIRED=2.22.0

PKG_CHECK_MODULES(PACKAGE, gtk+-2.0 >= $GTK_REQUIRED 
									glib-2.0 >= $GLIB_REQUIRED 
									gio-2.0 >= $GIO_REQUIRED 
									gthread-2.0 >= $GTHREAD_REQUIRED 
									gconf-2.0
									sqlite3)

AC_SUBST(PACKAGE_CFLAGS)
AC_SUBST(PACKAGE_LIBS)

#ALL_LINGUAS="zh_CN"

GETTEXT_PACKAGE=liblmplayer-search
AC_SUBST(GETTEXT_PACKAGE)
AM_GLIB_GNU_GETTEXT
AC_DEFINE_UNQUOTED(GETTEXT_PACKAGE,"$GETTEXT_PACKAGE", "definition of GETTEXT_PACKAGE")

GNOME_DOC_INIT

AC_SUBST(CFLAGS)
AC_SUBST(CXXFLAGS)
AC_SUBST(CPPFLAGS)
AC_SUBST(LDFLAGS)

AC_OUTPUT([
Makefile
src/Makefile
liblmplayer-search.pc
po/Makefile.in
])
