#include_next <fstab.h>

#ifndef _FSTAB_H_
#define _FSTAB_H_

#include <sys/cdefs.h>
#define	_PATH_FSTAB	"/etc/fstab"

__BEGIN_DECLS
void setfstab(const char *);
const char *getfstab (void);
__END_DECLS

#endif /* !_FSTAB_H_ */
