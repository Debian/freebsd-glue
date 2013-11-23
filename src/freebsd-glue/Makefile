LIB=	freebsd-glue
SRCS=	\
	exec.c \
	feature_present.c \
	fstab.c \
	funopen.c \
	getcap.c \
	getosreldate.c \
	random.c \
	${NULL}

LDADD=	-lbsd -ldb

SYS!=	dpkg-architecture -qDEB_HOST_GNU_SYSTEM

.if ${SYS} == "kfreebsd-gnu"
SRCS+=	\
	cpuset.c \
	disklabel.c \
	getbootfile.c \
	linkaddr.c \
	login_class.c \
	mac.c \
	socket.c \
	${NULL}
.endif

.include <bsd.lib.mk>
