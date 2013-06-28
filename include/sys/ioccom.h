#ifdef __FreeBSD_kernel__

# include_next <sys/ioccom.h>

#else

# ifndef _SYS_IOCCOM_H_
# define _SYS_IOCCOM_H_
# include <sys/ioctl.h>		/* For ioctl() */
# endif

#endif
