#include <unistd.h>
#include <sys/disklabel.h>

struct disklabel *
getdiskbyname (const char *name)
{
  /* We don't have disktab(5) */
  return NULL;
}
