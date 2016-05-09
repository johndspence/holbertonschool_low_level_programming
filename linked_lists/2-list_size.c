#include "list.h"

int list_size(List *list)
{
  List *currentnode;
  int i;

  currentnode = list;
  i = 1;

  while (currentnode->next != NULL)
    {
    currentnode = currentnode->next;
    i++;
    }
  return i;
}
