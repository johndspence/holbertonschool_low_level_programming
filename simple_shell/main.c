#include <stdio.h>
#include "libshell.h"
#include <sys/types.h>
#include <sys/wait.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

void commandpromptprinter(void);
void (*functionindex(char **tokens))(char **env);
char** commandlinereader(char **env);
int print_char(char c);
int str_comp(char *, char *);

int main(__attribute__((unused)) int argc, __attribute__((unused)) char **argv, char **env)
{
    while(1)
      {
            char **tokens;
            void (*token)(char **);

            /* Command Prompt */
            commandpromptprinter();

            /* Read user input passing only env, for later use and put in
             * "tokens" array */
            tokens = commandlinereader(env);

            if (str_comp(tokens[0], "exit") == 0)
              {
                exit(0);
              }

            /* Isolate first token of tokens, which should be the command */
            token = functionindex(tokens);
            if (token == 0)
            {
               printf("Unrecognized Command\n");
            }


            else
            {
               token(env);
            }
      }
            return 0;
}
