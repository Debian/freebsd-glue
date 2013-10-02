#include <fstab.h>
#include <err.h>
#include <errno.h>
#include <string.h>	/* strerror */
#include <stdio.h>

void
setfstab (const char *file)
{
  fprintf (stderr, "setfstab: %s", strerror (ENOSYS));
}

const char *getfstab (void)
{
  return _PATH_FSTAB;
}
