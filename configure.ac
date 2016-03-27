AC_INIT([hello], [1.0])
AC_PREREQ([2.69])
AC_CONFIG_SRCDIR([hello.c])
AC_CONFIG_FILES([testfile])
echo "The value of CC is ${CC}"
AC_PROG_CC
echo "The value of CC is ${CC}"
if test -z "${FOO}" ; then
	FOO=42
fi
AC_SUBST([FOO])
AC_OUTPUT
