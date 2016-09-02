/*
 * Use bit operators to compare 1 to n, returning O if both are true; E
 * otherwise
 */

char odd(int n)
{
  int i;
  i = 1;
  if (n & i)
  {
    return ('O');
  }
return('E');
}
