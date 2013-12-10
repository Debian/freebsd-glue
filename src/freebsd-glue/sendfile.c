#include <sys/types.h>
#include <sys/socket.h>
#include <sys/uio.h>
#include <unistd.h>
#include <sys/syscall.h>

int
bsd_sendfile (int fd, int s, off_t offset, size_t nbytes,
	      struct sf_hdtr *hdtr, off_t *sbytes, int flags)
{
  return syscall (SYS_sendfile, fd, s, offset, nbytes, hdtr, sbytes, flags);
}
