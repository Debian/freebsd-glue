/*-
 * Copyright (c) 2013 Robert Millan <rmh@debian.org>
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 * 1. Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 * 2. Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in the
 *    documentation and/or other materials provided with the distribution.
 *
 * THIS SOFTWARE IS PROVIDED BY THE AUTHOR AND CONTRIBUTORS ``AS IS'' AND
 * ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
 * ARE DISCLAIMED.  IN NO EVENT SHALL THE AUTHOR OR CONTRIBUTORS BE LIABLE
 * FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
 * DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS
 * OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION)
 * HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT
 * LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY
 * OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF
 * SUCH DAMAGE.
 *
 */

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
