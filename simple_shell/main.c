#include <stdio.h>
#include "libshell.h"
#include <sys/types.h>
#include <sys/wait.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

void cmd_prmpt_prntr(void);
char** cmd_ln_rdr();
int str_comp(char *, char *);
void (*blt_in_func_idx(char **cmd_ln_strgs))(char **env);
void (*path_func_idx(char **cmd_ln_strgs))(char **env);
int print_char(char c);
pid_t pid;

int main(__attribute__((unused)) int argc, __attribute__((unused)) char **argv, char **env)
{
    while(1)
      {
            char **cmd_ln_strgs;
            void (*blt_in_func)(char **);
            /* Command Prompt */
            cmd_prmpt_prntr();
            /* call command line reader, which call library function read_line
             * compare the first element of the arrary returned by command
             * line reader to "exit", and if a match, run bash function exit()
             * including currently unused variable
             */
            if (str_comp((cmd_ln_strgs = cmd_ln_rdr())[0], "exit") == 0)
              {
                exit(0);
              }
            if ((blt_in_func = blt_in_func_idx(cmd_ln_strgs)) != 0)
            {
              blt_in_func(env);
            }
            else
            {
            fork
            /* path_func = path_func_idx(cmd_ln_strngs, env*/
            /* check for a match in path
             * if there is a match, fork it and run it
             * test case: just for a run ls command */
            printf("Unrecognized Command\n");
            }

      }
return 0;
}
