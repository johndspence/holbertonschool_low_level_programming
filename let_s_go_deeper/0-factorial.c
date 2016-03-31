int factorial(int n) {
  /* If negative, no factorial */
  if (n < 0) {
    return(-1);
  }
  /* If 0 factorial is 1 */
  if (n == 0) {
  return 1;
  }
  /* Otherwise multiply n * n-1 recursively */
  else {
  return(n * factorial(n-1));
  }
}
