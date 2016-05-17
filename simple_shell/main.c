#include <stdio.h>
#include "libshell.h"
#include <sys/types.h>
#include <sys/wait.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

void cmd_prmpt_prntr(void);
char **cmd_ln_rdr();
int str_comp(char *, char *);
void (*blt_in_func_idx(char **cmd_ln_strgs))(char **env);
int path_func_idx(char **, char **);
void (*blt_in_func)(char **);


int main(__attribute__((unused))int argc, __attribute__((unused)) char **argv, char **env)
{
	while(1) {
		int i;
		pid_t pid;
		int status;
		char **cmd_ln_strgs;

		/* Command Prompt */
		cmd_prmpt_prntr();

		/* call command line reader, which call library function read_line
		 * compare the first element of the arrary returned by command
		 * line reader to "exit", and if a match,
		 * run bash function exit() including currently unused variable
		 */
		if (str_comp((cmd_ln_strgs = cmd_ln_rdr())[0], "exit") == 0) {
			i = 0;
			while (cmd_ln_strgs[i]) {
				free(cmd_ln_strgs[i]);
				i++;
			}
			free (cmd_ln_strgs);
			exit(0);
		}
		if ((blt_in_func = blt_in_func_idx(cmd_ln_strgs)) != 0) {
			blt_in_func(env);
			i = 0;
			while (cmd_ln_strgs [i]) {
				free (cmd_ln_strgs[i]);
				i++;
			}
			free (cmd_ln_strgs);
		}
		else {
			if ((pid = fork()) == -1) {
				perror("fork");
				i = 0;
				while (cmd_ln_strgs[i]) {
					free (cmd_ln_strgs[i]);
					i++;
				}
				free (cmd_ln_strgs);
				return 1;
			}
			else if (pid == 0) {
				printf("I am the son ! %d\n", pid);
				if (path_func_idx(cmd_ln_strgs, env) == 0) {
					printf("command line string 0 is: %s\n", cmd_ln_strgs[0]);
					execve ("/bin/ls", cmd_ln_strgs, env);
					i = 0;
					while (cmd_ln_strgs[i]) {
	 					free (cmd_ln_strgs[i]);
						i++;
					}
					free (cmd_ln_strgs);
				}
				else {
				printf("Unrecognized Command %d\n", pid);
				}
			}
			else {
				printf("I am the father ! %d\n", pid);
				wait(&status);
				printf("My son process has terminated with the status:%d\n", status);
				i = 0;
				while (cmd_ln_strgs[i]) {
					free (cmd_ln_strgs[i]);
					i++;
				}
				free (cmd_ln_strgs);
			}
			/* printf("Unrecognized Command %d\n", pid); */
		}
	}
return 0;
}
