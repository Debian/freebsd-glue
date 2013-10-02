#include_next <sys/socket.h>

#ifndef _FREEBSD_SYS_SOCKET_H_
#define	_FREEBSD_SYS_SOCKET_H_

#include <sys/cdefs.h>

__BEGIN_DECLS
int setfib(int fib);
__END_DECLS

#endif
