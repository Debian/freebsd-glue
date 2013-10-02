#include <fstab.h>
#include <err.h>
#include <errno.h>
#include <string.h>	/* strerror */

void
setfstab (const char *file)
{
  warn ("setfstab: %s", strerror (ENOSYS));
}

const char *getfstab (void)
{
  return _PATH_FSTAB;
}
