#include <stdio.h>
#include <string.h>


void printenvironment(char **);
int str_comp(char *, char *);

void (*functionindex(char **tokens))(char **env)
{
    int i;

    char *functionnames[] = {"env", NULL};
    void (*functionaddresses[])(char **) = {&printenvironment, NULL};

    printf("token [0] in functionindex is %s\n", tokens[0]);
    printf("functionnames [0] in functionindex is %s\n", functionnames[0]);


        i = 0;
    while (functionnames[i] != NULL)

        {
          if (str_comp(tokens[0], functionnames[i]) == 0)
            {
                return(functionaddresses[i]);
            }
            i++;
            }
return 0;
}
