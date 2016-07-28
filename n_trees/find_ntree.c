#include "tree_hdr.h"

Ntree *correct_ntree(Ntree *current_ntree, array, array_len)
{
	int i;
	List *current_list;

	i = 0;
	current_list = NULL;
	while (i <= array_len)
	{
		current_list = current_ntree->children;
		if (current_list->node->str == array[i]
			{
				current_ntree = current_ntree->node;
			}
		else
		{
			current_list = current_list->next;
			while (current_list->node != NULL
				{
					if (current_list->node->str == array[i])
					{
						current_ntree = current_list->node;
					}
				}
		}
		i++;
	}
	return current_ntree;
}
