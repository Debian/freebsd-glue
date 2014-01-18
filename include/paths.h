#include_next <paths.h>

#ifndef _FREEBSD_PATHS_H_
#define	_FREEBSD_PATHS_H_

#include <sys/cdefs.h>

#define	_PATH_DEVZERO	"/dev/zero"
#define _PATH_ETC	"/etc"
#define	_PATH_SYSPATH	"/sbin:/usr/sbin"
#define _PATH_IFCONFIG	"/sbin/ifconfig"
#define _PATH_MOUNT	"/sbin/mount"
#define _PATH_UUCPLOCK	"/var/lock/"		/* as per FHS, section 5 */

#ifdef __FreeBSD_kernel__
#define _PATH_FWMEM		"/dev/fwmem"
#define	_PATH_UFSSUSPEND	"/dev/ufssuspend"
#define _PATH_GBDE		"/sbin/gbde"
#define _PATH_GELI		"/sbin/geli"
#define _PATH_MDCONFIG		"/sbin/mdconfig"
#endif

__BEGIN_DECLS
#ifdef __FreeBSD_kernel__
const char *getbootfile(void);
#endif
__END_DECLS

#endif
