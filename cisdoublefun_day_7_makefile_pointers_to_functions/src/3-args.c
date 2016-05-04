#include <stdio.h>

int main(int argc, char **argv)
{
  int argcount;
  argcount = 0;

  /* iterate from 0 to argc, the nmber of arguments */
  while (argcount < argc)
    {
    /* print each argument */  
    printf("%s\n", argv[argcount]);
    argcount++;
    }
    return(0);
}
