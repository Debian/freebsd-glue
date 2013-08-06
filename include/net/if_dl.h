#include_next <net/if_dl.h>

#ifdef __FreeBSD_kernel__

__BEGIN_DECLS
void	link_addr(const char *, struct sockaddr_dl *);
char	*link_ntoa(const struct sockaddr_dl *);
__END_DECLS

#endif
