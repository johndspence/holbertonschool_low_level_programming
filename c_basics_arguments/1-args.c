#include <stdio.h>
/* integer ac which holds number of arguments */
/* char **av is pointer to an array of pointers to char strings */
int main (int ac, char **av) {
  int i;
  for(i=0; i<ac; ++i)
  {
  /* print each string by calling pointer */
  printf("%s\n", av[i]);
  }
return 0;
}
