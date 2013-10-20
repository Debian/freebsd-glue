#include <crypt.h>
#include <string.h>

const char *
crypt_get_format (void)
{
  return "des";
}

int
crypt_set_format (const char *string)
{
  return !strcmp (string, "des");
}
