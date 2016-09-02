#include <stdio.h>

int factorial(int n)
  {
  int result;
  result = n;

  /* Handle edge cases */
  if((n < 0) || (n > 12))
  {
    return -1;
  }

  /* Iterate by n */
  while (n > 1)
  {
    result = result * (n-1);
    n--;
  }
  return result;
}
