#if defined(__unused) && !defined(__DO_NOT_DEFINE_UNUSED)
#define __DO_DEFINE_UNUSED_AT_THE_END_OF_NETDB_H
#endif

#undef __unused
#define __DO_NOT_DEFINE_UNUSED
#include_next <netdb.h>
#undef __DO_NOT_DEFINE_UNUSED

#ifdef __DO_DEFINE_UNUSED_AT_THE_END_OF_NETDB_H
#define __unused __attribute__((__unused__))
#undef __DO_DEFINE_UNUSED_AT_THE_END_OF_NETDB_H
#endif
