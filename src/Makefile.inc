#SHLIB_MAJOR = 0
SHLIBDIR = /lib

CFLAGS = -Wall -g -pipe -fPIC -D_GNU_SOURCE \
	-Werror \
	-isystem ../../include \
	-D__FREEBSD_LIBC \
	${NULL}
