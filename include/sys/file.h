#include_next <sys/file.h>

#ifdef __FreeBSD_kernel__
#include <sys/kglue/sys/file.h>
#else
#ifndef _SYS_FILE_H_
#define	_SYS_FILE_H_
#endif
#endif
