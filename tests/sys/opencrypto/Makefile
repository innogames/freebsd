# $FreeBSD$

PACKAGE=	tests

TESTSDIR=	${TESTSBASE}/sys/opencrypto
BINDIR=		${TESTSDIR}

PLAIN_TESTS_SH=	runtests

TEST_METADATA.runtests+= required_programs="python2"
TEST_METADATA.runtests+= required_user="root"

PYMODULES=	cryptodev.py cryptodevh.py cryptotest.py dpkt.py

${PACKAGE}FILES+=	${PYMODULES}

.include <bsd.test.mk>
