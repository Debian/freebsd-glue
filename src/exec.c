#include <stdlib.h>	/* setenv */
#include <unistd.h>	/* execvp */

int
execvP(const char *name, const char *path, char * const argv[])
{
	setenv ("PATH", path, 1);
	return execvp(name, argv);
}
