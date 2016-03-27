AC_INIT([hello], [1.0])
AC_PREREQ([2.69])
AC_CONFIG_SRCDIR([hello.c])
AM_INIT_AUTOMAKE([foreign 1.13])
AC_PROG_CC
AC_CHECK_FUNCS([printf foobar])
AC_SEARCH_LIBS([dlopen], [dl])
AC_ARG_ENABLE([debug],
	[AS_HELP_STRING([--enable-debug], [Enable debug])],
	[echo "Value given: ${enableval}"],
	[echo "Value not given"])
echo "enable_debug = ${enable_debug}"
AC_CONFIG_HEADERS([config.h])
AC_CONFIG_FILES([Makefile])
AC_OUTPUT
