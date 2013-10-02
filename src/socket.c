#include <sys/socket.h>
#include <unistd.h>
#include <sys/syscall.h>

int
setfib (int fib)
{
  return syscall (SYS_setfib, fib);
}
