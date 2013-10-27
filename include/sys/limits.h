#ifdef __FreeBSD_kernel__
#include_next <sys/limits.h>
#else
#ifndef _SYS_LIMITS_H_
#define _SYS_LIMITS_H_
#include <sys/cdefs.h>
#include <limits.h>
#endif
#endif /* __FreeBSD_kernel__ */
