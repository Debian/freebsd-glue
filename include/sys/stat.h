#include_next <sys/stat.h>

#ifndef _SYS_STAT_H_
#define	_SYS_STAT_H_

#include <sys/time.h>

#ifndef S_ISTXT
#define S_ISTXT S_ISVTX
#endif

#endif /* _SYS_STAT_H_ */
