#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "str_struct.h"

char *strdup(const char *s);
struct String *string_to_struct(char *str)
  {
    int i;
    struct String *structwithnoname;

    i = 0;

    /* count the length of the incoming string, str */
    while (str[i] != '\0')
      {
        i++;
      }

    /* malloc for the struct entitled structwithnoname */
    structwithnoname = malloc(sizeof(struct String));
    if (structwithnoname == NULL)
      return NULL;

    structwithnoname->str = strdup(str);
    structwithnoname->length = i;
    return structwithnoname;
  }
