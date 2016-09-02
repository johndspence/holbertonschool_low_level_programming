#include <stdio.h>

int strings_compare(const char *s1, const char *s2){
  for ( ; *s1 == *s2; s1++, s2++)
  	if (*s1 == '\0')
  	    return 0;
    return ((*(unsigned char *)s1 < *(unsigned char *)s2) ? -15 : +15);
}
