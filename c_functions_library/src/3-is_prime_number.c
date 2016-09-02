int insidefunction(int n, int i);

int is_prime_number(int n) {
  if (n <= 1) {
    return (0);
  }
  return (insidefunction(n, 2));
}

int insidefunction(int n, int i) {
  if (n % i == 0) {
    return (0);
  }
  if (i >= (n / 2)) {
    return (1);
  }
  return (insidefunction(n, i+1));
}
