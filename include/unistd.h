#include_next <unistd.h>

#ifndef _UNISTD_H_
#define	_UNISTD_H_

#include <grp.h>	/* initgroups */
#include <crypt.h>	/* crypt */

#ifdef __FreeBSD_kernel__
#include <sys/syscall.h>
#include <stddef.h>	/* size_t */
#endif

#define getopt(argc, argv, options) bsd_getopt(argc, argv, options)

__BEGIN_DECLS

int bsd_getopt(int argc, char *const *argv, const char *options);
extern int optreset;

#ifdef __FreeBSD_kernel__

static inline int
nfssvc (int a, void *b)
{
  return syscall (SYS_nfssvc, a, b);
}

#ifndef SYS_closefrom
#define SYS_closefrom 509
#endif

static inline void
closefrom (int lowfd)
{
  syscall (SYS_closefrom, lowfd);
}

int getosreldate(void);
int feature_present(const char *);
int execvP(const char *, const char *, char * const[]);

mode_t getmode(const void *, mode_t);
void *setmode(const char *);

#ifndef SYS_nlm_syscall
#define SYS_nlm_syscall		154
#endif

static inline int
nlm_syscall (int a, int b, int c, char **d)
{
  return syscall (SYS_nlm_syscall, a, b, c, d);
}

int getloginclass (char *name, size_t len);
int setloginclass (const char *name);

int getpeereid (int, uid_t *, gid_t *);

int swapon (const char *);
int swapoff (const char *);

#endif /* __FreeBSD_kernel__ */

void setproctitle(const char *fmt, ...);

const char *crypt_get_format (void);
int crypt_set_format (const char *string);

__END_DECLS

#endif
