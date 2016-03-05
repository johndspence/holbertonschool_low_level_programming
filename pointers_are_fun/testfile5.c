#include <stdio.h>

int main(void)
{
  int n;
  printf("address n: %p\n", &n);
  int *p;
  printf("address p: %p\n", &p);
  int a[2];
  printf("address a: %p\n", a);
  printf("The size of integer is %lu\n", sizeof(n));

  p = &n;
  printf("p = &n;\np + 0: %p\n", p);
  printf("p + 1: %p\n", p + 1);
  printf("p + 2: %p\n", p + 2);
  printf("p + 3: %p\n", p + 3);
  printf("p + 4: %p\n", p + 4);
  printf("p + 5: %p\n", p + 5);
  printf("p + 6: %p\n", p + 6);
  printf("p + 7: %p\n", p + 7);
  printf("p + 8: %p\n", p + 8);
  printf("p + 9: %p\n", p + 9);
  printf("p + 10: %p\n", p + 10);
  p = a;
  printf("p = a;\np: %p\np + 1: %p\n", p, p + 1);
  return (0);
}