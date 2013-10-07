#include <stdio.h>
#include <errno.h>

FILE *
funopen (const void *cookie, int (*readfn)(void *, char *, int),
	 int (*writefn)(void *, const char *, int),
	 fpos_t (*seekfn)(void *, fpos_t, int), int (*closefn)(void *))
{
  auto ssize_t cookie_read (void *cookie, char *buf, size_t size);
  auto ssize_t cookie_read (void *cookie, char *buf, size_t size)
  {
    return readfn (cookie, buf, size);
  }

  auto ssize_t cookie_write (void *cookie, const char *buf, size_t size);
  auto ssize_t cookie_write (void *cookie, const char *buf, size_t size)
  {
    return writefn (cookie, buf, size);
  }

  if (seekfn)
    {
      errno = ENOSYS;
      return NULL;
    }

  cookie_io_functions_t funcs = {
    .read = cookie_read,
    .write = cookie_write,
    .seek = NULL,
    .close = closefn
  };

  return fopencookie ((void *) cookie, "r+", funcs);
}

FILE *
fropen (void *cookie, int (*readfn)(void *, char *, int))
{
  return funopen (cookie, readfn, NULL, NULL, NULL);
}

FILE *
fwopen (void *cookie, int (*writefn)(void *, const char *, int))
{
  return funopen (cookie, NULL, writefn, NULL, NULL);
}
