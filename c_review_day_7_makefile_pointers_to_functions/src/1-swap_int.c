#include <stdio.h>

/* swap dereferenced values of a and b. Place b into temp variable */
void swap_int(int *a, int *b)
{
  int c = *b;
  *b = *a;
  *a = c ;
}
