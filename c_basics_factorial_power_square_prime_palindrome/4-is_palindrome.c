int counting_function(char *s, int i);
int recurse_check(char *s, int j, int k);
/* Outside function */
int is_palindrome(char *s) {
  return(counting_function(s, 0));
  }
/* Determine string length */
int counting_function(char *s, int i) {
  if (*(s+i) != '\0') {
    return(counting_function(s, (i + 1)));
  }
  return(recurse_check(s, 0, (i-1)));
}
/* Compare ++first and --last character */
int recurse_check(char *s, int j, int k) {
  if (*(s+j) != *(s+k)) {
    return(0);
  }
  if (j >= k) {
    return(1);
  }
return recurse_check(s, (j+1), (k-1));
}
