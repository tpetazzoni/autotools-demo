AC_INIT([hello], [1.0])
AC_PREREQ([2.69])
AC_CONFIG_SRCDIR([src/hello.c])
LT_INIT
LT_PREREQ([2.4])
AM_INIT_AUTOMAKE([foreign 1.13 subdir-objects])
AM_SILENT_RULES([yes])
AC_PROG_CC
AC_CHECK_FUNCS([printf foobar])
AC_SEARCH_LIBS([dlopen], [dl])
AC_ARG_ENABLE([debug],
        [AS_HELP_STRING([--enable-debug], [Enable debug])],
        [], [enable_debug=yes])
AM_CONDITIONAL([DEBUG_ENABLED], [test "${enable_debug}" = "yes"])
if test "${enable_debug}" = "yes" ; then
   AC_DEFINE([DEBUG_ENABLED], [1], [Debugging enabled])
fi
AC_CONFIG_HEADERS([config.h])
AC_CONFIG_FILES([Makefile])
AC_OUTPUT
