#include <string.h>
#include <stdio.h>
#include <stdlib.h>


int str_len(char *env);

int path_func_idx(char **cmd_ln_strgs, char **env)
{
	int i;
	int j;
	int k;
	int str_len_path;
	int str_len_cmd;
	char *path;
	/*char *trimd_path;*/
	/*char **path_s;*/

	i = 0;
	j = 0;

	while (env[i++]) {
		if (env[i][0] == 80 && env[i][1] == 65 && env[i][2] == 84 && env[i][3] == 72) {
			printf("the correct row is %d\n", i);
			str_len_cmd = str_len(cmd_ln_strgs[0]);
			str_len_path = str_len(env[i]);
			path = malloc((str_len_path + str_len_cmd + 1 - 5) * sizeof(char));
			if (path == NULL) {
				perror("path");
				printf("malloc failed\n");
				return 1;
			}
/*
			paths = string_split(entire_line, ' ');*/



			printf("str_len_path is %d\n", str_len_path);

			printf("str_len_cmd is %d\n", str_len_cmd);


			k = 5;
			while (env[i][k] != '\0') {
				path[j++] = env[i][k++];
			}
			printf(" after path [j] is %s", path);
			k = 0;
			while (cmd_ln_strgs[0][k]) {
				path[j++] = cmd_ln_strgs[0][k++];
			}
			path[j] = '\0';
			printf("I have froud PATH and will return 0 from path_func_idx!\n");
			printf("path is %s\n", path);
			return 0;
		}
	}
	return -1;
}
