LIB=	freebsd-glue
SRCS=	\
	crypt.c \
	exec.c \
	feature_present.c \
	fstab.c \
	funopen.c \
	getcap.c \
	getosreldate.c \
	random.c \
	trimdomain.c \
	zopen.c \
	${NULL}

SYS!=	dpkg-architecture -qDEB_HOST_GNU_SYSTEM

.if ${SYS} == "kfreebsd-gnu"
SRCS+=	\
	disklabel.c \
	linkaddr.c \
	login_class.c \
	socket.c \
	${NULL}
.endif

.include <bsd.lib.mk>
