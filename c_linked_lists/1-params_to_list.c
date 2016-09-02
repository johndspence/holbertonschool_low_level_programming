#include <stdlib.h>
#include "list.h"
#include "stdio.h"
#define NEWNODE_CREATE newnode = malloc(sizeof(List));\
                if (newnode == NULL) \
                  { \
                    return NULL; \
                  } \
                stringlength = str_len(av[i]); \
                stringcopy = string_copy(av[i], stringlength); \
                newnode->str = stringcopy; \
                newnode->next = NULL; \

/* Determine string length of passed read-only string */
int str_len(char *str)
{
  int i;

  i = 0;
  while (str[i] != 0)
    {
      i++;
    }
    return i;
}

/* Copy read-only string content into new dest */
char *string_copy(const char *src, int i)
{
  int j;
  char *dest;

  j = 0;
  dest = malloc((i + 1) * sizeof(char));
    if (dest == NULL)
      return NULL;
  dest[i] = '\0';

  while (j < i)
    {
      dest[j] = src[j];
      j++;
    }
  return dest;
}

/* add-node function:  Receive arguments, call str_len and
 * copy_string and return firstnode to main if successful and NULL to main
 * if unsuccessful */

List *params_to_list(int ac, char **av)
{
  int i;
  int stringlength;
  char *stringcopy;

  List *firstnode;
  List *newnode;
  List *lastnode;

  i = 0;

  while (i < ac)
    {
      NEWNODE_CREATE
      lastnode = newnode;
      if (i == 0)
        {
          firstnode = newnode;
        }
      if (i > 0 && i < ac)
        {
          lastnode->next = newnode;
        }
      i++;
    }
    return firstnode;
}
