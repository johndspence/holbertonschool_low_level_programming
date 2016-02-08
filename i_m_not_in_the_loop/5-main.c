#include <stdio.h>

int main(void)
{
  int i;
  int sum;

  for (i = 0; i < 3; i++)
    {
      printf("Hello! (%d)\n", i);
    }
  i=0;
  while (i < 3)
    {
      printf("Hello! (%d)\n", i);
      i = i + 1;
    }
  /************************************/
  sum = 0;
  for (i = 0; i < 10; i++)
    {
      sum += i;
      printf("loop %d: sum = %d\n", i, sum);
    }
  for (sum = 0, i = 0; i < 10; i++, sum += i)
    {
      printf("loop %d: sum = %d\n", i, sum);
    }
  sum = 0;
  i = 0;
  for (; i < 10;)
    {
      sum += i;
      printf("loop %d: sum = %d\n", i, sum);
      i++;
    }
  return (0);
}
