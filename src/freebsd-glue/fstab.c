#include <fstab.h>
#include <err.h>
#include <errno.h>
#include <string.h>	/* strerror */
#include <stdio.h>

void
setfstab (const char *file)
{
  /* NULL means /etc/fstab */
  if (file != NULL)
    {
      errno = ENOSYS;
      warn ("setfstab");
    }
}

const char *getfstab (void)
{
  return _PATH_FSTAB;
}
