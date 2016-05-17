#include "libshell.h"
#include <stdlib.h>

char *read_line(const int fd);
char **string_split(const char *str, char separator);
int print_char(char c);

char **cmd_ln_rdr(void)
{
	char *entire_line;
	char **cmd_ln_strgs;
	entire_line = read_line(0);
	cmd_ln_strgs = string_split(entire_line, ' ');
	free(entire_line);
	return cmd_ln_strgs;
}
