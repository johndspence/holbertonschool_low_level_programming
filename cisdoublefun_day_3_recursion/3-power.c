#include <limits.h>

int power(int x, int y)
{
  /* Check edge cases */
  if ((y < 0) || (x < 0))
  {
    return -1;
  }

  /* Last Recursion */
  if (y == 1)
  {
    return x;
  }

  /* Check for integer overflow and recurse */
  if (x < (INT_MAX / power(x, y - 1)))
  {
    return (x * power(x, y - 1));
  }
  else return (-1);
}
