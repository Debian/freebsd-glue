LIB=	freebsd-glue
SRCS=	\
	exec.c \
	feature_present.c \
	fstab.c \
	funopen.c \
	getbsize.c \
	getcap.c \
	getosreldate.c \
	random.c \
	strnstr.c \
	${NULL}

LDADD=	-lbsd

SYS!=	dpkg-architecture -qDEB_HOST_GNU_SYSTEM

.if ${SYS} == "kfreebsd-gnu"
SRCS+=	\
	cpuset.c \
	disklabel.c \
	getbootfile.c \
	linkaddr.c \
	login_class.c \
	mac.c \
	mac_set.c \
	socket.c \
	sendfile.c \
	sysarch.c \
	${NULL}
.endif

.include <bsd.lib.mk>
