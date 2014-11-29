bin_PROGRAMS 		= euler
euler_SOURCES	 	= euler.c
euler_LDADD		= problem001.lo
EXTRA_DIST 		= $(TESTS)
MAINTAINERCLEANFILES 	= Makefile.in

TESTS_ENVIRONMENT	= top_builddir=$(top_builddir)

TESTS			= t/problem001.test

maintainer-clean-local: clean
	rm -rf aclocal.m4 autom4te.cache compile configure *~ depcomp install-sh Makefile.in missing *.out problem??? *.o config.log Makefile config.status test-driver t/*log t/*trs *log *trs INSTALL COPYING ar-lib config.guess config.sub ltmain.sh libtool *.lo *.la .deps .libs */*~ euler

test: check
