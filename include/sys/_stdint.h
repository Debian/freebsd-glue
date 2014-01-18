#if defined(__FreeBSD_kernel__) && !defined(__FREEBSD_GLUE_USE_EMBEDDED_HEADERS)

#include_next <sys/_stdint.h>

#else

#ifndef _SYS__STDINT_H_
#define _SYS__STDINT_H_

#include <stdint.h>

#endif /* !_SYS__STDINT_H_ */

#endif /* __FreeBSD_kernel__ */
