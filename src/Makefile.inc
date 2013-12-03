SHLIB_MAJOR ?= 0
SHLIBDIR ?= /lib

CFLAGS = -Wall -g -pipe -fPIC -D_GNU_SOURCE \
	-Werror \
	-isystem ${.CURDIR}/../../include \
	-D__FREEBSD_LIBC \
	${NULL}
