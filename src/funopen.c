#include <stdio.h>
#include <stdlib.h>
#include <errno.h>

struct cookiebox
{
  void *cookie;
  int (*readfn) (void *, char *, int);
  int (*writefn) (void *, const char *, int);
  int (*closefn) (void *);
};

static ssize_t
cookiebox_read (void *cookie, char *buf, size_t size)
{
  struct cookiebox *cookiebox = cookie;
  return cookiebox->readfn (cookiebox->cookie, buf, size);
}

static ssize_t
cookiebox_write (void *cookie, const char *buf, size_t size)
{
  struct cookiebox *cookiebox = cookie;
  return cookiebox->writefn (cookiebox->cookie, buf, size);
}

static int
cookiebox_close (void *cookie)
{
  struct cookiebox *cookiebox = cookie;
  int ret = cookiebox->closefn (cookiebox->cookie);
  free (cookiebox);
  return ret;
}

FILE *
funopen (const void *cookie, int (*readfn)(void *, char *, int),
	 int (*writefn)(void *, const char *, int),
	 fpos_t (*seekfn)(void *, fpos_t, int), int (*closefn)(void *))
{
  if (seekfn)
    {
      errno = ENOSYS;
      return NULL;
    }

  cookie_io_functions_t cookiebox_funcs = {
    .read = cookiebox_read,
    .write = cookiebox_write,
    .seek = NULL,
    .close = cookiebox_close
  };

  struct cookiebox *cookiebox = malloc (sizeof (*cookiebox));
  
  cookiebox->cookie = (void *) cookie;
  cookiebox->readfn = readfn;
  cookiebox->writefn = writefn;
  cookiebox->closefn = closefn;

  return fopencookie ((void *) cookiebox, "r+", cookiebox_funcs);
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
