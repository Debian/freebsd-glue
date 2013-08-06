#ifndef _FREEBSD_LIBUTIL_H_
#define _FREEBSD_LIBUTIL_H_

#include <bsd/libutil.h>

#include <sys/cdefs.h>
#include <sys/_types.h>
#include <sys/_stdint.h>

__BEGIN_DECLS
void trimdomain(char *_fullhost, int _hostsize);
__END_DECLS

#endif
