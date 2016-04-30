#include <stdio.h>

void print_char(char c)
{
  write(1, &c, 1);
}


int triangle_number(int n)
{
  printf("n = %d\n", n);
  if (n == 1)
  {
    return 1;
  }
return(n * triangle_number(n-1));
}


int main (void)
{
  int number;
  int result;

  number = 3;
  result = triangle_number(number);
  printf("%d\n", result);
  return 0;
}
