#include_next <sys/types.h>

# if defined(__FreeBSD_kernel__) && !defined(__FREEBSD_GLUE_USE_EMBEDDED_HEADERS)
#  include <sys/kern/types.h>
# else
#  ifndef _SYS_TYPES_H_
#  define _SYS_TYPES_H_
#  include <sys/cdefs.h>
#  include <stdint.h> /* uintXX_t */

/* Emulate implicit includes on FreeBSD */
#  include <machine/endian.h>
#  include <sys/select.h>

/* FreeBSD <sys/types.h> has a few ugly kludges to declare a copy of
   functions which actually belong to <unistd.h>. We do the same
   here.  */
#  include <__want_lseek.h>

#endif /* _SYS_TYPES_H_ */

#endif /* __FreeBSD_kernel__ */
