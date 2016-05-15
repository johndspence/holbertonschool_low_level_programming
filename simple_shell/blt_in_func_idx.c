#include <stdio.h>
#include <string.h>


void print_env(char **);
int str_comp(char *, char *);

void (*blt_in_func_idx(char **cmd_ln_strgs))(char **env)
{
    int i;

    char *blt_in_func_nms[] = {"env", NULL};
    void (*blt_in_func_addr_s[])(char **) = {&print_env, NULL};

    printf("cmd_ln_strgs[0] in blt_in_func_indx is %s\n", cmd_ln_strgs[0]);
    printf("blt_in_func_nms[0] in blt_in_func_indx is %s\n", blt_in_func_nms[0]);

    i = 0;

    while (blt_in_func_nms[i] != NULL)

        {
          if (str_comp(cmd_ln_strgs[0], blt_in_func_nms[i]) == 0)
            {
                return(blt_in_func_addr_s[i]);
            }
            i++;
            }
return 0;
}
