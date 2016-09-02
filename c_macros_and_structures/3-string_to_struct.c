#include <stdlib.h>
#include <stdio.h>
#include "str_struct.h"

/* string length */
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

/* string copy and populate struct */
char* string_copy(char *copyofstr, char *str,  int i)
{
  int j;

  j = 0;
  while (j <= i)
    {
      copyofstr[j] = str[j];
      j++;
    }
return copyofstr;
}

/* malloc, call other functions and return to main */
struct String *string_to_struct(char *str)
{
  int i;
  struct String *structwithnoname;
  char *copyofstr;
  char *newcopyofstr;

  i = str_len(str);

  structwithnoname = malloc(sizeof(struct String));
  if (structwithnoname == NULL)
    return NULL;

  copyofstr = malloc(i * sizeof(char) + 1);
  if (copyofstr == NULL)
      return NULL;

  newcopyofstr = string_copy(copyofstr, str, i);

  structwithnoname->str = newcopyofstr;
  structwithnoname->length = i;
  return structwithnoname;
}
