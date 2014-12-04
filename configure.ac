AC_INIT(projecteuler, version-0.5, jeek@jeek.net)
AC_CONFIG_MACRO_DIR([m4])
AC_CONFIG_FILES([Makefile])
AC_SEARCH_LIBS([pow], [m], [], [AC_MSG_ERROR([unable to link math library])])
AC_PROG_CC
AM_PROG_AR
AC_LANG(C)
AC_CHECK_HEADERS([stdio.h math.h gcd.h config.h])
AC_DEFINE([NUMTYPE], [long long], "Long Longs.")
AC_DEFINE([NUMSTR], ["%lld"], "Long Longs string.")
LT_INIT
AM_INIT_AUTOMAKE([-Wall -Werror foreign])
AC_OUTPUT