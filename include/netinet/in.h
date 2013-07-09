#include_next <netinet/in.h>

#ifndef _NETINET_IN_H_
#define _NETINET_IN_H_

#include <netinet6/in6.h>

#ifdef __FreeBSD_kernel__

#ifndef IPPORT_MAX
#define IPPORT_MAX 65535
#endif

#endif

#endif
