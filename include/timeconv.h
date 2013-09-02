#ifndef _TIMECONV_H_
#define	_TIMECONV_H_

#include <sys/cdefs.h>
#include <sys/_types.h>

#include <stdint.h>
#define __need_time_t
#include <time.h>

static inline int32_t
_time_to_time32 (time_t t)
{
  return((int32_t) t);
}

static inline int64_t
_time_to_time64(time_t t)
{
  return((int64_t) t);
}

static inline time_t
_time64_to_time(int64_t t64)
{
  return((time_t) t64);
}
    
static inline time_t
_time32_to_time(int32_t t32)
{
  return((time_t) t32);
}

#endif /* _TIMECONV_H_ */
