SHLIB_MAJOR ?= 0
SHLIBDIR ?= /lib

CFLAGS += -g -fPIC -D_GNU_SOURCE \
	-Wall -Werror -Wno-error=maybe-uninitialized \
	-isystem ${.CURDIR}/../../include \
	-D__FREEBSD_LIBC \
	${NULL}
