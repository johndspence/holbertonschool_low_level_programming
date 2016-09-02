#include <limits.h>

int power(int x, int y)
{
  int result;
  result = x;

  /* Check edge cases */
  if ((y < 0) || (x < 0))
  {
    return -1;
  }

  if (y == 0)
  {
    return 1;
  }

  while (y > 1)
  {
    /* Check for integer overflow and iterate */
    if(x < (INT_MAX / result))
    {
    result = result * x;
    }
    else return -1;
    y--;
  }
  return result;
}
