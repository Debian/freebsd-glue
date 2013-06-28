#ifdef __FreeBSD_kernel__

# include_next <sys/ttycom.h>

#else

# ifndef _SYS_TTYCOM_H_
# define _SYS_TTYCOM_H_
#  include <sys/ioccom.h>
# endif

#endif
