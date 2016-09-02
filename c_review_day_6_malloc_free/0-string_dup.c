#include <stdlib.h>

/* Original string Length */
int str_len(char *str)
{
  int i;
  i = 0;

  while (str[i] != '\0')
  {
  i++;
  }
return i;
}

char *string_dup(char *str)
{
  char *newspace;
  int i;
  int end;

  i = str_len(str);
  end = i;

  /* Allocate memory and error check */
  newspace = malloc((i + 1) * sizeof(char));
  if (newspace == NULL)
  {
    return(NULL);
  }

  /* iterate using i through newspace and str */
  while (i >= 0)
  {
    newspace[i] = str[i];
    i--;
  }
newspace[end] = '\0';
return newspace;
}
