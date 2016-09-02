#include <stdio.h>
char *string_concat(char *, char *);

int main()
{
  char concat[32] = "Holberton ";
  char *s;

  s = string_concat(concat, "School!");
  printf("%s\n", s);
  return (0);
}
