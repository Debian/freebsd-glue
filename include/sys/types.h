#include_next <sys/types.h>

# ifdef __FreeBSD_kernel__
#  include <sys/kern/types.h>
# else
#  ifndef _SYS_TYPES_H_
#  define _SYS_TYPES_H_
#  include <sys/cdefs.h>
#  include <stdint.h> /* uintXX_t */

/* Emulate implicit includes on FreeBSD */
#  include <machine/endian.h>
#  include <sys/select.h>

#endif /* _SYS_TYPES_H_ */

#endif /* __FreeBSD_kernel__ */
