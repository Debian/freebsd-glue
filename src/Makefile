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

LDADD=	-ldb

CFLAGS = -Wall -g -pipe -fPIC -D_GNU_SOURCE \
	-Werror \
	-isystem ../include \
	-D__FREEBSD_LIBC \
	${NULL}

SYS!=	dpkg-architecture -qDEB_HOST_GNU_SYSTEM

.if ${SYS} == "kfreebsd-gnu"
SRCS+=	\
	cpuset.c \
	disklabel.c \
	linkaddr.c \
	login_class.c \
	socket.c \
	${NULL}
.endif

.include <bsd.lib.mk>
