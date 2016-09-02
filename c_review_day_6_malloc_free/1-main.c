#include <stdio.h>
#include <stdlib.h>
char *all_in_one_args(int ac, char **av);

int main(int ac, char **av)
{
  char *s;

  s = all_in_one_args(ac, av);
  if (s == NULL)
    {
      printf("Function failed\n");
      return (1);
    }
  printf("%s", s);
  free(s);
  return (0);
}
