#include <stdio.h>

const char *src;
const char *s;
char *d;
char *dest;
int n;
/* if deref value of d is not zero, increment d, then add deref value of s */
/* until *d = *s++) == 0 */
char *nconcat_strings(char *dest, const char *src, int n){
  if (n != 0) {
    char *d = dest;
    const char *s = src;

    while (*d != 0)
      d++;
    do {
      if ((*d = *s++) == 0)
        break;
      d++;
    } while (--n != 0);
    *d = 0;
  }
  return dest;
}
