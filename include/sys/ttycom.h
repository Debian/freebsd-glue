#if defined(__FreeBSD_kernel__) && !defined(__FREEBSD_GLUE_USE_EMBEDDED_HEADERS)

# include_next <sys/ttycom.h>

#else

# ifndef _SYS_TTYCOM_H_
# define _SYS_TTYCOM_H_
#  include <sys/ioccom.h>
# endif

#endif
