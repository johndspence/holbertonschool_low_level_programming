#include <string.h>
#include <stdio.h>
#include <stdlib.h>

int str_len(char *env);
char **string_split(const char *str, char separator);

int path_func_idx(__attribute__((unused))char **cmd_ln_strgs, __attribute__((unused))char **env)
{
	/*int i;
	int j;
	int k;
	int str_len_path;
	int str_len_cmd;
	char *path;
	char **paths;
	char *testpath;

	i = 0;

	while (env[i++]) {
		if (env[i][0] == 80 && env[i][1] == 65 && env[i][2] == 84 &&
						env[i][3] == 72) {
			printf("the correct row is %d\n", i);
			str_len_cmd = str_len(cmd_ln_strgs[0]);
			str_len_path = str_len(env[i]);
			path = malloc((str_len_path + str_len_cmd + 1 - 5) *
			 			sizeof(char));
			if (path == NULL) {
				perror("path");
				printf("malloc failed\n");
				return 1;
			}
			j = 0;
			k = 5;
			while (env[i][k] != '\0')
				path[j++] = env[i][k++];
			paths = string_split(path, ':');
			printf("str_len_path is %d\n", str_len_path);
			printf("str_len_cmd is %d\n", str_len_cmd);

			j = 0;
			k = 5;
			while (paths[j++] != '\0')
				{
				printf("paths = %s\n", paths[j]);
				printf("%d\n", str_len(paths[j]));
				testpath = (malloc
				paths[j] = realloc(path[j], (str_len(paths[j] + str_len_cmd)))
				paths[str_len(paths[j]+1] = '/';
				printf("%d\n", str_len(paths[j]));
			}

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
			printf("I have found PATH and will return 0 from path_func_idx!\n");
			printf("path is %s\n", path);
			return 0;*/


	return 0;
}
