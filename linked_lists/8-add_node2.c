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
  List *current;
  List *node;

  stringlength = str_len(str);
  stringcopy = string_copy(str, stringlength);
    if (stringcopy == NULL)
      return 1;
  node = malloc(sizeof(List));
    if (node == NULL)
      return 1;
  node->str = stringcopy;
  node->next = *list;
  /* We just populated node.content with a pointer to a new string
   * and node.next with a pointer to NULL */
  *list = node;
  /* dereferenced value of **list is *list (what **list points to)
   * which is the same as *first of main so we are really updating
   * first to no longer hold NULL and now holds the address of node
   * because the value of node is really the address of the contiguous
   * blocks of struct node */
   while (node != NULL)
   {
     printf("%d\n", node->next);
     node = node->next;
   }


   return 0;
}
