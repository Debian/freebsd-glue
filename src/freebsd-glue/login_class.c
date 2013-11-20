#include <unistd.h>
#include <sys/syscall.h>
#include <stddef.h>

int
getloginclass (char *name, size_t len)
{
  return syscall (SYS_getloginclass, name, len);
}

int
setloginclass (const char *name)
{
  return syscall (SYS_setloginclass, name);
}
