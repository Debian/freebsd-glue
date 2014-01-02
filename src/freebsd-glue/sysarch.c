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

/* Temporary kludge to avoid conflicting declarations (static inline) in certain
   versions of <machine/sysarch.h> */

#define amd64_get_fsbase __disabled_amd64_get_fsbase
#define amd64_get_gsbase __disabled_amd64_get_gsbase
#define amd64_set_fsbase __disabled_amd64_set_fsbase
#define amd64_set_gsbase __disabled_amd64_set_gsbase
#define i386_get_fsbase __disabled_i386_get_fsbase
#define i386_get_gsbase __disabled_i386_get_gsbase
#define i386_set_fsbase __disabled_i386_set_fsbase
#define i386_set_gsbase __disabled_i386_set_gsbase

#include <machine/sysarch.h>

#undef amd64_get_fsbase
#undef amd64_get_gsbase
#undef amd64_set_fsbase
#undef amd64_set_gsbase
#undef i386_get_fsbase
#undef i386_get_gsbase
#undef i386_set_fsbase
#undef i386_set_gsbase

#if defined(__amd64__)
int
amd64_get_fsbase (void **addr)
{
  return sysarch (AMD64_GET_FSBASE, addr);
}

int
amd64_get_gsbase (void **addr)
{
  return sysarch (AMD64_GET_GSBASE, addr);
}

int
amd64_set_fsbase (void *addr)
{
  return sysarch (AMD64_SET_FSBASE, &addr);
}

int
amd64_set_gsbase (void *addr)
{
  return sysarch (AMD64_SET_GSBASE, &addr);
}

#elif defined(__i386__)

int
i386_get_fsbase (void **addr)
{
  return sysarch (I386_GET_FSBASE, addr);
}

int
i386_get_gsbase (void **addr)
{
  return sysarch (I386_GET_GSBASE, addr);
}

int
i386_set_fsbase (void *addr)
{
  return sysarch (I386_SET_FSBASE, &addr);
}

int
i386_set_gsbase (void *addr)
{
  return sysarch (I386_SET_GSBASE, &addr);
}
#endif
