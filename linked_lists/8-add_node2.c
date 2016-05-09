#include <stdlib.h>
#include "list.h"
#include "stdio.h"

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
 * copy_string and return 0 to main if successful and 1 to main
 * if unsuccessful */

/* first create the currentnode and set its link to NULL */
int add_node(List **list, char *str)
{
  List *currentnode;
  List *newnode;
  int stringlength;
  char *stringcopy;

  /* Determine the string length in all cases */
  stringlength = str_len(str);
  stringcopy = string_copy(str, stringlength);
  if (stringcopy == NULL)
      return 1;

  /* If *list is null, this is the first node, so create node
   * pulate it with the string, point it to NULL, and point *list
   * to this node
   */
  if (*list == NULL)
    {
      newnode = malloc(sizeof(List));
        if (newnode == NULL)
          return 1;
      newnode->str = stringcopy;
      newnode->next = NULL;
      *list = newnode;
      currentnode = *list;
      return 0;
    }

  /* If *list is not empty, find the last element in the list */
  if (*list != NULL)
    {
      currentnode = *list;
      while (currentnode->next != NULL)
        currentnode = currentnode->next;
      newnode = malloc(sizeof(List));
        if (newnode == NULL)
          return 1;
      newnode->str = stringcopy;
      newnode->next = NULL;
      currentnode->next = newnode;
      return 0;
    }
return 0;
}
