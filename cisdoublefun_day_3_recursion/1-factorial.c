

/* Handle edge cases */
int factorial(int n){

if ((n < 0) || (n > 12))
{
  return(-1);
}

if (n == 0)
{
  return(1);
}

/* Recursion function */
if(n == 1)
{
  return 1;
}

else return (n * factorial(n-1));
}
