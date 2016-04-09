#include <stdio.h>

char *d;

/* string_copy copies the string pointed to by src into the */
/* array pointed to by dest and returns the value of dest */
char *string_copy(char *dest, const char *src)
{
    char *d = dest;
    while ((*d++ = *src++) != 0)
	;
    return (dest);
}
