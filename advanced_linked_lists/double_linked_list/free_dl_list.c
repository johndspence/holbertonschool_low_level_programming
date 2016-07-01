#include <stdlib.h>
#include "list.h"

/* Loop through nodes, freeing str and the each struct */
void free_dl_list(List *list) {
	List *current_node;

	while (list)
	{
		current_node = list;
		list = list->next;
		free (current_node->str);
		free (current_node);
		}
}
