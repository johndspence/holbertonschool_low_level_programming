#include <string.h>
#include <stdio.h>


int path_func_idx(__attribute__((unused)) char **cmd_ln_strgs, char **env)
    {
      int i;
      int j;
char *path;


      i = 0;
      j = 0;



      while (env[i++])
          {
          if (env[i][0] == 80 && env[i][1] == 65 && env[i][2] == 84 && env[i][3] == 72)
              {
                while (env[i][j])

                    path[j++] = env[i][j++];
                  }
              printf("I have froud PATH and will return 0!");
              printf("%s\n", path);
              return 0;
              }
          }
      return -1;
    }
