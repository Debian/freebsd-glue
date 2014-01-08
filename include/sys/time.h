#include_next <sys/time.h>

# ifdef __FreeBSD_kernel__
#  include <sys/kern/time.h>
# else
#ifndef _SYS_TIME_H_
#  define _SYS_TIME_H_

/* On FreeBSD, <sys/time.h> is expected to CLOCK_MONOTONIC, etc,
   which on Glibc are defined in <bits/time.h>. Glibc's <sys/time.h>
   doesn't include <bits/time.h> in full mode, but Glibc's <time.h>
   does. */
#  include <time.h>

/* FreeBSD code expects that this file includes... */
#  include <sys/types.h>

/* FreeBSD-specific clocks. Attempt to map them to portable macros (but
   make sure the calls fail when this mapping would not be reliable) */
#define CLOCK_UPTIME			(-1)
#define CLOCK_UPTIME_PRECISE		(-1)
#define CLOCK_UPTIME_FAST		(-1)
#define CLOCK_REALTIME_PRECISE		CLOCK_REALTIME
#define CLOCK_REALTIME_FAST		CLOCK_REALTIME_COARSE
#define CLOCK_MONOTONIC_PRECISE		CLOCK_MONOTONIC
#define CLOCK_MONOTONIC_FAST		CLOCK_MONOTONIC_COARSE
#define CLOCK_SECOND			(-1)

#endif /* _SYS_TIME_H_ */

#endif /* __FreeBSD_kernel__ */
