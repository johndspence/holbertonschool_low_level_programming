#include <stdlib.h>
#include <string.h>
#include <stdio.h>
/* integer ac which holds number of arguments */
/* char **av is pointer to an array of pointers to char strings */
int main (int ac, char **av) {
  int i = 0;
  int j = 0;
  for(i = 0; i < ac; i++)
  {
  j = 0;
  /* print each character of each string the location of the string, i */
  /* and the location of the character, j */
  while(av[i][j] != '\0'){
    if ((av[i][j] = '-') && (av[i][j+1] = '-')) {
      printf("%c\n", av[i][j+3]);
    }
        //  printf("Argument %d letter %d : %c\n", i, j, av[i][j]);
         j++;
      }
    }
return (0);
}
