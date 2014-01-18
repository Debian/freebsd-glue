#if defined(__FreeBSD_kernel__) && !defined(__FREEBSD_GLUE_USE_EMBEDDED_HEADERS)

# include_next <sys/ioccom.h>

#else

# ifndef _SYS_IOCCOM_H_
# define _SYS_IOCCOM_H_
# include <sys/ioctl.h>		/* For ioctl() */
# endif

#endif
