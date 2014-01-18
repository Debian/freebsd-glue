#include_next <sys/file.h>

#if defined(__FreeBSD_kernel__) && !defined(__FREEBSD_GLUE_USE_EMBEDDED_HEADERS)
#include <sys/kglue/sys/file.h>
#else
#ifndef _SYS_FILE_H_
#define	_SYS_FILE_H_
#endif
#endif
