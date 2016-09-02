#include <stdio.h>

int main(int argc, char **argv)
{
  int argcount;
  argcount = argc - 1;

  /* iterate from argcount to argc, the number of arguments */
  while (argcount >= 0)
    {
    /* print each argument */
    printf("%s\n", argv[argcount]);
    argcount--;
    }
    return(0);
}
