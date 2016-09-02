#include <limits.h>
#include <stdio.h>

/* int absolute(int); */

int main(void)
{
  int n;
  n = (-1);
  printf("%d\n", n);
  n = (10);
  printf("%d\n", n);
  n = (0);
  printf("%d\n", n);
  n = (INT_MAX);
  printf("%d\n", n);
  n = (INT_MIN + 1);
  printf("%d\n", n);
  n = (INT_MIN);
  printf("%d\n", n);
  return (0);
}
