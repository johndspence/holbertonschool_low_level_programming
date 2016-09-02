#include <stdlib.h>
#include "list.h"

void rev_list(List **list)
{
  List *previousnode;
  List *currentnode;
  List *nextnode;

  previousnode = NULL;
  currentnode = *list;

/* Substitute through previousnode, currentnode, and nextnode
 * end with head node being previousnbode and currentnode is now NULL
 */
while (currentnode != NULL)
  {
    nextnode = currentnode->next;
    currentnode->next = previousnode;
    previousnode = currentnode;
    currentnode = nextnode;
  }
  *list = previousnode;
}
