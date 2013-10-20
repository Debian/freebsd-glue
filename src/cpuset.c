#include <sys/param.h>
#include <sys/cpuset.h>
#include <sys/syscall.h>
#include <unistd.h>

int
cpuset (cpusetid_t *setid)
{
  return syscall (SYS_cpuset, setid);
}

int
cpuset_setid (cpuwhich_t which, id_t id, cpusetid_t setid)
{
  return syscall (SYS_cpuset_setid, which, id, setid);
}

int
cpuset_getid (cpulevel_t level, cpuwhich_t which, id_t id, cpusetid_t *setid)
{
  return syscall (SYS_cpuset_getid, level, which, id, setid);
}

int
cpuset_getaffinity (cpulevel_t level, cpuwhich_t which, id_t id, size_t setsize, cpuset_t *mask)
{
  return syscall (SYS_cpuset_getaffinity, level, which, id, setsize, mask);
}

int
cpuset_setaffinity (cpulevel_t level, cpuwhich_t which, id_t id, size_t setsize, const cpuset_t *mask)
{
  return syscall (SYS_cpuset_setaffinity, level, which, id, setsize, mask);
}
