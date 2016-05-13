#include <stdio.h>
#include "libshell.h"

void commandpromptprinter(void);
char* builtinfunctions(char **);
char** commandlinereader(char **env);
int print_char(char c);
int i;

int main(__attribute__((unused)) int argc, __attribute__((unused)) char **argv, char **env)

{

        {
            char **tokens;
            char *token;

            /*Command Prompt */
            commandpromptprinter();
            tokens = commandlinereader(env);
            token = builtinfunctions(tokens);
            i = 0;
            while (token[i] != '\0')
                {
                    print_char(token[i]);
                    i++;
                }
                print_char('\n');
        }
    return 0;
}
