#include <unistd.h>

int print_char(char c);
int i;
char *commandprompt;

void commandpromptprinter(void)
{

    i = 0;
    commandprompt = "SimpleShell ;-)";

    while (commandprompt[i] != '\0')
        {
            print_char(commandprompt[i]);
            i++;
        }
}
