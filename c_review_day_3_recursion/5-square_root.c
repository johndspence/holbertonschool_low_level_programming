#include <stdio.h>

int searchingfunction(int n, int sum, int count, int odds)
{
  /* if sum == input count is the square root */
  if (sum > n)
    return -1;
  /* if sum == input count is the square root */
  if (sum == n)
    return count;
  /* otherwise recurse, incrementing the variables */
  return searchingfunction(n, sum + odds + 2, count + 1, odds + 2);
}

int square_root(int n)
{
  int sum;
  int count;
  int odds;
  int result;

  sum = 1;
  count = 1;
  odds = 1;
  return result = searchingfunction(n, sum, count, odds);
}
