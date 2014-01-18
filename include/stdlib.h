#include_next <stdlib.h>

#ifndef _STDLIB_H_
#define _STDLIB_H_

#include <sys/types.h>

__BEGIN_DECLS

u_int32_t arc4random (void);
void arc4random_stir (void);
const char *getprogname(void);
void setprogname (const char *);
void *reallocf(void *ptr, size_t size);
void srandomdev (void);
long long strtonum (const char *nptr, long long minval, long long maxval, const char **errstr);
char *getbsize(int *, long *);

char	*cgetcap(char *, const char *, int);
int	 cgetclose(void);
int	 cgetent(char **, char **, const char *);
int	 cgetfirst(char **, char **);
int	 cgetmatch(const char *, const char *);
int	 cgetnext(char **, char **);
int	 cgetnum(char *, const char *, long *);
int	 cgetset(const char *);
int	 cgetstr(char *, const char *, char **);
int	 cgetustr(char *, const char *, char **);

__END_DECLS

#endif
