#include_next <sys/socket.h>

#ifndef _FREEBSD_SYS_SOCKET_H_
#define	_FREEBSD_SYS_SOCKET_H_

#include <sys/cdefs.h>

__BEGIN_DECLS
int setfib(int fib);
__END_DECLS

#ifdef __FreeBSD_kernel__
/* bsd_sendfile prototype already in glibc. */
#define sendfile(fd, s, offset, nbytes, hdtr, sbytes, flags) \
		bsd_sendfile((fd), (s), (offset), (nbytes), (hdtr), (sbytes), (flags))
#endif

#endif
