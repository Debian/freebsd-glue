#include_next <sys/proc.h>

#ifndef _FREEBSD_SYS_PROC_H_
#define	_FREEBSD_SYS_PROC_H_

#ifdef __FreeBSD_kernel__
#include <sys/callout.h>
#include <sys/event.h>
#include <sys/condvar.h>
#include <sys/filedesc.h>
#include <sys/queue.h>
#include <sys/_lock.h>
#include <sys/lock_profile.h>
#include <sys/_mutex.h>
#include <sys/osd.h>
#include <sys/priority.h>
#include <sys/rtprio.h>
#include <sys/runq.h>
#include <sys/resource.h>
#include <sys/sigio.h>
#include <sys/signal.h>
#include <sys/signalvar.h>
#include <sys/time.h>
#include <sys/ucontext.h>
#include <sys/ucred.h>
#include <machine/proc.h>
#endif

#endif
