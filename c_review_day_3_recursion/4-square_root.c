int square_root(int n)
{
  int sum;
  int count;
  int odds;


  sum = 1; /* Compare to n */
  count = 1; /* count number of iterations */
  odds = 1; /* add to sum during each iteration */

  while (sum <= n)
      {
    if (sum == n) /* if sum == input count is the square root */
      return count;
    count = count + 1;
    odds = odds + 2;
    sum = sum + odds;
    }
  return -1; /* if sum >n, then there is no natural square */
}
