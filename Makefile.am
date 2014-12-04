bin_PROGRAMS 		= euler
euler_SOURCES	 	= euler.c
euler_LDADD		= problem001.lo problem002.lo problem003.lo factor.lo problem004.lo problem005.lo gcd.lo
EXTRA_DIST 		= $(TESTS)
MAINTAINERCLEANFILES 	= Makefile.in

ACLOCAL_AMFLAGS= -I m4

TESTS_ENVIRONMENT	= top_builddir=$(top_builddir)

TESTS			= t/euler.test \
			  t/problem001testcaseworks.test \
			  t/problem001correctsolution.test \
			  t/problem00160seconds.test \
			  t/problem002correctsolution.test \
			  t/problem00260seconds.test \
			  t/problem003testcaseworks.test \
			  t/problem003correctsolution.test \
			  t/problem00360seconds.test \
			  t/problem004testcaseworks.test \
			  t/problem004correctsolution.test \
			  t/problem00460seconds.test \
			  t/problem005testcaseworks.test \
			  t/problem005correctsolution.test \
			  t/problem00560seconds.test 

maintainer-clean-local: clean
	rm -rf aclocal.m4 autom4te.cache compile configure *~ depcomp install-sh Makefile.in missing *.out problem??? *.o config.log Makefile config.status test-driver t/*log t/*trs *log *trs INSTALL COPYING ar-lib config.guess config.sub ltmain.sh libtool *.lo *.la .deps .libs */*~ euler m4

test: check
