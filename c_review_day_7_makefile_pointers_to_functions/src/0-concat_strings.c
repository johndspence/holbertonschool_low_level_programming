#include <stdio.h>

const char *src;
char *dest;
/* Use *d as pointer to dest. Increment *d until *d++ = *src++) !='\0' */
char *concat_strings(char *dest, const char *src)
{
  char *d = dest;
  while (*d)++d;
  while ((*d++ = *src++) !='\0');
  return dest;
}
