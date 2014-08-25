#include_next <stdio.h>

#ifndef _STDIO_H_
#define _STDIO_H_

#include_next <bsd/stdio.h>

/* FreeBSD <stdio.h> has a few ugly kludges to declare a copy of
   functions which actually belong to <unistd.h>. We do the same
   here.  */
#include <__want_lseek.h>

#include <sys/cdefs.h>

#endif
