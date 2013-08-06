LIB=	freebsd-glue
SRCS=	\
	exec.c \
	feature_present.c \
	getosreldate.c \
	trimdomain.c \
	linkaddr.c \
	${NULL}

SYS!=	dpkg-architecture -qDEB_HOST_GNU_SYSTEM

.if ${SYS} == "kfreebsd-gnu"
SRCS+=	\
	${NULL}
.endif

.include <bsd.lib.mk>
