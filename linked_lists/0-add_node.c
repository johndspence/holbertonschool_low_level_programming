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
int add_node(List **list, char *str)
{
  int stringlength;
  char *stringcopy;
  List *currentnode;

  /* Set list to point to currentnode */
  *list = currentnode;

  stringlength = str_len(str);
  stringcopy = string_copy(str, stringlength);
    if (stringcopy == NULL)
      return 1;
  currentnode = malloc(sizeof(List));
    if (node == NULL)
      return 1;
  currentnode->str = stringcopy;
  currentnode->next = *list;
  /* We just populated currentnode.content with a pointer to a new string
   * and node.next with a pointer to NULL */

  /* dereferenced value of **list is *list (what **list points to)
   * which is the same as *list of main so we are really updating
   * first to no longer hold NULL and now holds the address of currentnode
   */
   return 0;
}
