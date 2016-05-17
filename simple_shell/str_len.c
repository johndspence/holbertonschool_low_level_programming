#include <stdio.h>
#include <string.h>

int j;

int str_len(char *env)
{
        j = 0;

        while (env[++j]);
        return j;
}
