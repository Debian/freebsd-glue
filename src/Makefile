LIB=	freebsd-glue
SRCS=	\
	exec.c \
	feature_present.c \
	fstab.c \
	getosreldate.c \
	random.c \
	trimdomain.c \
	${NULL}

SYS!=	dpkg-architecture -qDEB_HOST_GNU_SYSTEM

.if ${SYS} == "kfreebsd-gnu"
SRCS+=	\
	disklabel.c \
	linkaddr.c \
	socket.c \
	${NULL}
.endif

.include <bsd.lib.mk>
