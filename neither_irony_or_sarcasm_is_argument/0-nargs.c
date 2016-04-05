#include <stdio.h>
#include <stdlib.h>
/* integer ac which holds number of arguments */
/* char **av is pointer to an array of pointers to char strings */
int main (int ac, char **av) {
  /* print ac -1 to allow for program name */
  (void)(**av);
  printf("%d\n", (ac-1));
return(0);
}
