#include_next <sys/user.h>

#ifndef _FREEBSD_SYS_USER_H_
#define _FREEBSD_SYS_USER_H_

#ifdef __FreeBSD_kernel__
#include <machine/pcb.h>
#include <sys/errno.h>
#include <sys/time.h>
#include <sys/resource.h>
#include <sys/ucred.h>
#include <sys/uio.h>
#include <sys/queue.h>
#include <sys/_lock.h>
#include <sys/_mutex.h>
#include <sys/proc.h>
#include <vm/vm.h>
#include <vm/vm_param.h>
#include <vm/pmap.h>
#include <vm/vm_map.h>
#include <sys/resourcevar.h>
#include <sys/signalvar.h>
#include <sys/socket.h>
#endif

#endif
