#include_next <fcntl.h>
#include <sys/fcntl.h>

#ifndef _FREEBSD_FCNTL_H_
#define _FREEBSD_FCNTL_H_

#ifdef __FREEBSD_LIBC
/* On FreeBSD, these are hidden symbols provided by libc. We use
   macros to redirect them, but only them visible to freebsd-glue
   code.  */
#define _open	open
#define _read	read
#define _close	close
#endif

#endif
