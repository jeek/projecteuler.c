bin_PROGRAMS 		= euler
euler_SOURCES	 	= euler.c
euler_LDADD		= problem001.lo
EXTRA_DIST 		= $(TESTS)
MAINTAINERCLEANFILES 	= Makefile.in

testsubdir		= t

TESTS_ENVIRONMENT	= top_builddir=$(top_builddir)

TESTS			= t/problem001.test

distclean-local:
	-rm -rf $(testsubdir)
