#include_next <netinet/in.h>

#ifndef _NETINET_IN_H_
#define _NETINET_IN_H_

#include <netinet6/in6.h>

#ifdef __FreeBSD_kernel__

#ifndef IPPORT_MAX
#define IPPORT_MAX 65535
#endif

#endif

#ifndef INADDR_ALLRPTS_GROUP
#define	INADDR_ALLRPTS_GROUP	(u_int32_t)0xe0000016	/* 224.0.0.22, IGMPv3 */
#endif
#ifndef INADDR_CARP_GROUP
#define	INADDR_CARP_GROUP	(u_int32_t)0xe0000012	/* 224.0.0.18 */
#endif
#ifndef INADDR_PFSYNC_GROUP
#define	INADDR_PFSYNC_GROUP	(u_int32_t)0xe00000f0	/* 224.0.0.240 */
#endif
#ifndef INADDR_ALLMDNS_GROUP
#define	INADDR_ALLMDNS_GROUP	(u_int32_t)0xe00000fb	/* 224.0.0.251 */
#endif

#endif
