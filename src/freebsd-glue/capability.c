/*-
 * Copyright (c) 2014 Robert Millan <rmh@debian.org>
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

#include <sys/capability.h>
#include <sys/syscall.h>
#include <unistd.h>

#ifndef SYS___cap_rights_get
#define SYS___cap_rights_get SYS_cap_rights_get
#endif

int
cap_enter(void)
{
  return syscall (SYS_cap_enter);
}

int
cap_getmode(u_int *modep)
{
  return syscall (SYS_cap_getmode, modep);
}

int
cap_rights_limit(int fd, const cap_rights_t *rights)
{
  return syscall (SYS_cap_rights_limit, fd, rights);
}

int
__cap_rights_get(int version, int fd, cap_rights_t *rights)
{
  return syscall (SYS___cap_rights_get, version, fd, rights);
}

int
cap_ioctls_limit(int fd, const unsigned long *cmds, size_t ncmds)
{
  return syscall (SYS_cap_ioctls_limit, fd, cmds, ncmds);
}

ssize_t
cap_ioctls_get(int fd, unsigned long *cmds, size_t maxcmds)
{
  return syscall (SYS_cap_ioctls_get, fd, cmds, maxcmds);
}

int
cap_fcntls_limit(int fd, uint32_t fcntlrights)
{
  return syscall (SYS_cap_fcntls_limit, fd, fcntlrights);
}

int
cap_fcntls_get(int fd, uint32_t *fcntlrightsp)
{
  return syscall (SYS_cap_fcntls_get, fd, fcntlrightsp);
}
