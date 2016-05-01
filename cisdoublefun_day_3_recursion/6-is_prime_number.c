#include <stdio.h>

int primechecker(int n, int i)
{
  if (i == 1)
  {
    return 1;
    printf("i = %d\n", i);
  }
  else
  {
    /* If any i less than n divides evenly, n is not prime */
    if (n % i == 0)
    {
      return 0;
    }
    else
    {
      return primechecker(n, i - 1);
    }
  }
}

int is_prime_number(int n)
{
  /* Lowest prime number is 3 */
  if (n <= 1)
    {
    return 0;
    }
  else
    return primechecker(n, (n / 2));
}
