#include <unistd.h>

int print_char(char c);
int i;
char *cmd_prmpt;

void cmd_prmpt_prntr(void)
{

    i = 0;
    cmd_prmpt = "SimpleShell ;-)";

    while (cmd_prmpt[i] != '\0')
        {
            print_char(cmd_prmpt[i]);
            i++;
        }
}
