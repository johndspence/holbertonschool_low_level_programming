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
void (*blt_in_func)(char **);

int main(__attribute__((unused)) int argc, __attribute__((unused)) char **argv, char **env)
{
    while(1)
      {
            pid_t pid;
            int status;
            char **cmd_ln_strgs;
            char *exec_argv[] = {"/usr/bin/ls", "-1", NULL};

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
                    if ((pid = fork()) == -1)
                      {
                        perror("fork");
                        return 1;
                      }
                    if (pid == 0)
                      {
                        printf("I am the son ! %d\n", pid);
                        execve(exec_argv[0], exec_argv, env);
                        /* check the error return value of of execve and continue a cordingly */

                      }
                    else
                      {
                        printf("I am the father ! %d\n", pid);
                        wait(&status);
                        printf("My son process has terminated with the status:%d\n", status);
                      }
                  }
            /* path_func = path_func_idx(cmd_ln_strngs, env*/

            /* printf("Unrecognized Command %d\n", pid); */
        }
return 0;
}
