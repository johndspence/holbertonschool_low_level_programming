int square_root_test(int n, int i);

int square_root(int n) {
  /* Negative numbers have no square root */
  if (n < 0) {
    return(-1);
  }
  /* Call square root test function */
  else {
    return(square_root_test(n,0));
  }
}
/* Recursively multiply ++i * ++i while product < n */
int square_root_test(int n, int i) {
  if (i*i < n) {
    return square_root_test(n, i+1);
  }
  /* If product is > n, return no square root */
  else if (i*i > n) {
    return(-1);
  }
  /* Otherwise i*i = n and return i as square root */
  else {
    return(i);
  }
}
