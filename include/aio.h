#if defined(__unused) && !defined(__DO_NOT_DEFINE_UNUSED)
#define __DO_DEFINE_UNUSED_AT_THE_END_OF_AIO_H
#endif

#undef __unused
#define __DO_NOT_DEFINE_UNUSED
#include_next <aio.h>
#undef __DO_NOT_DEFINE_UNUSED

#ifdef __DO_DEFINE_UNUSED_AT_THE_END_OF_AIO_H
#define __unused __attribute__((__unused__))
#undef __DO_DEFINE_UNUSED_AT_THE_END_OF_AIO_H
#endif
