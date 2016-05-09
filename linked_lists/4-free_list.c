#include "list.h"
#include <stdlib.h>

void free_list(List *list)
{
  List *currentnode;
  /* Free the current node str, then free currentnode */
  while (list != NULL)
    {
      currentnode = list;
      list = list->next;
      free(currentnode->str);
      free(currentnode);
    }
}
