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
    i = 0;
    while (entireline[i] != '\0')
        {
          print_char(entireline[i]);
          i++;
        }
    tokens = string_split(entireline, ' ');
    print_char(tokens[1][0]);
    return tokens;
}
