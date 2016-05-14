#include "libshell.h"

char *read_line(const int fd);
char **string_split(const char *str, char separator);
int print_char(char c);
int i;

char **commandlinereader(__attribute__((unused)) char **env)
{
    char *entireline;
    char **tokens;

    entireline = read_line(0);
    tokens = string_split(entireline, ' ');

    i = 0;
    
    return tokens;
}
