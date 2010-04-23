AC_PREREQ(2.52)

# Making release:
#   liblmplayer_search_micro_version += 1;
#   liblmplayer_search_interface_age += 1;
# if any functions have been added, set liblmplayer_search_interface_age to 0,
# if backwards compatibility has been broken,
# set LIBLMPLAYER_SEARCH_BINARY_AGE and LIBLMPLAYER_SEARCH_INTERFACE_AGE to 0.

# 制作一个发行版：
#   micro_version += 1;
#   interface_age += 1;
# 如果任何函数被加入，设置interface_age为0，
# 如果后向兼容性被破坏，
# 设置binary_age和interface_age为0.
#
m4_define(lmplayer_version_major, 0)
m4_define(lmplayer_version_minor, 12)
m4_define(lmplayer_version_micro, 0)
m4_define(liblmplayer_search_interface_age, 0)

AC_INIT([liblmplayer-search],
        [lmplayer_version_major.lmplayer_version_minor.lmplayer_version_micro],
        [http://www.lmplayer.com])

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

# If you need a modifier for the version number, 
# Normally empty, but can be used to make "fixup" releases.
m4_define([liblmplayer_search_extraversion], [])

m4_define([liblmplayer_search_current], 
					[m4_eval(100 * lmplayer_version_minor + lmplayer_version_micro - liblmplayer_search_interface_age)])
m4_define([liblmplayer_search_binary_age], [m4_eval(100 * lmplayer_version_minor + lmplayer_version_micro)])
m4_define([liblmplayer_search_revision], [liblmplayer_search_interface_age])
m4_define([liblmplayer_search_age], [m4_eval(liblmplayer_search_binary_age - liblmplayer_search_interface_age)])
m4_define([liblmplayer_search_version], 
					[lmplayer_version_major.lmplayer_version_minor.lmplayer_version_micro()liblmplayer_search_extraversion()])

LIBLMPLAYER_SEARCH_CURRENT=liblmplayer_search_current
LIBLMPLAYER_SEARCH_REVISION=liblmplayer_search_revision
LIBLMPLAYER_SEARCH_AGE=liblmplayer_search_age

AC_SUBST(LIBLMPLAYER_SEARCH_INTERFACE_AGE)
AC_SUBST(LIBLMPLAYER_SEARCH_CURRENT)
AC_SUBST(LIBLMPLAYER_SEARCH_REVISION)
AC_SUBST(LIBLMPLAYER_SEARCH_AGE)
AC_SUBST(LIBLMPLAYER_SEARCH_BINARY_VERSION)

AC_PROG_CC
AM_PROG_CC_C_O
AC_PROG_CXX
AC_ISC_POSIX
AC_HEADER_STDC
AC_PROG_INSTALL
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
