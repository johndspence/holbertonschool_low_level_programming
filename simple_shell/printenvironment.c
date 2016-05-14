#include <stdio.h>

void printenvironment(char **env)
  {
    int i;
    i = 0;
    while (env[i] != '\0')
      {
      printf("%s\n", env[i]);
      i++;
      }
  }
