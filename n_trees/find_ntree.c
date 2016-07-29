#include "tree_hdr.h"

NTree* correct_ntree(NTree *current_ntree_ptr, char** parents, int array_len)
{
	int i;
	List *current_list_ptr;

	i = 0;
	current_list_ptr = NULL;
	while (i <= array_len)
	{
		current_list_ptr = current_ntree_ptr->children;
		if (current_list_ptr->node->str == parents[i])
			{
				current_ntree_ptr = current_list_ptr->node;
			}
		else
		{
			current_list_ptr = current_list_ptr->next;
			while (current_list_ptr->node != NULL)
				{
					if (current_list_ptr->node->str == parents[i])
					{
						current_ntree_ptr = current_list_ptr->node;
					}
				}
		}
		i++;
	}
	return current_ntree_ptr;
}
