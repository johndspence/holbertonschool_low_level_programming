#include <stdio.h>
#include <stdint.h>
#include <inttypes.h>

int main(void) {
  int n;
  int a[5];
  int *p;

  a[2] = 1024;
  p = &n;
  /*
   * write your line of code here...
   * Remember:
   * - you are not allowed to use a
   * - you are not allowed to modify p
   * - only one statement
   * - you are not allowed to code anything else than this line of code
   */
  ;
  /* ...so that this prints 98\n */
  printf("value of a[0]      =  %d\n", a[0]);
  printf("value of a[1]      =  %d\n", a[1]);
  printf("value of a[2]      =  %d\n", a[2]);
  printf("value of a[3]      =  %d\n", a[3]);
  printf("value of a[4]      =  %d\n", a[4]);
  printf("n                  =  %d\n", n);
  printf("*p                 =  %d\n", *p);
  printf("value of p   in dec:  %" PRIuPTR "\n", (uintptr_t)p);
  printf("address n    in dec:  %" PRIuPTR "\n", (uintptr_t)&n);
  printf("address p    in dec:  %" PRIuPTR "\n", (uintptr_t)&p);
  printf("address a[0] in dec:  %" PRIuPTR "\n", (uintptr_t)&a[0]);
  printf("address a[1] in dec:  %" PRIuPTR "\n", (uintptr_t)&a[1]);
  printf("address a[2] in dec:  %" PRIuPTR "\n", (uintptr_t)&a[2]);
  printf("address a[3] in dec:  %" PRIuPTR "\n", (uintptr_t)&a[3]);
  printf("address a[4] in dec:  %" PRIuPTR "\n", (uintptr_t)&a[4]);

  return (0);
}
