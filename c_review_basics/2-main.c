#include <stdio.h>

int print_char(char c);

int main(void)
{
  int a[5] = { 0, 1, 2, 4, 1 };
  int b[5] = { 1, 6, 2, 2, 8 };
  int i;

  i = 4;
  while (i >= 0)
  {
    /*
     * Iterate from 4 to 0 over arrays a and b, summing each [i] and
     * printing using + '0' to force char representation
     */
    int sum;
    sum = a[i] + b[i];
    print_char(sum + '0');
    i--;
  }
  print_char('\n');
  return (0);
}
