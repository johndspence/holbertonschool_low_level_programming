#include <stdio.h>

char *builtinfunctions(char **tokens)
{
    int i;

    char *builtinfunctionnames[] = {"env", "exit"};
    char *builtinfunctionaddresses[] = {"/usr/bin/env", "exit"};
    printf("%s\n", builtinfunctionnames[0]);
    printf("%s\n", builtinfunctionaddresses[0]);
    i = 0;
    printf("%s\n", tokens[1]);
    while (builtinfunctionnames != NULL)
        {
          if (tokens[0] == builtinfunctionnames[i])
            {
              return(builtinfunctionaddresses[i]);
            }
            i++;
        }
return "no match";
}
