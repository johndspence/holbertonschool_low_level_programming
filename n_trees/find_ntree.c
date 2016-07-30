#include "tree_hdr.h"


List* correct_list_ptr(List *current_list_ptr, char* parent)
{
	/*We receive a pointer to the root node and one parent value. It must have children
	because otherwise array length would be 0*/
	if (current_list_ptr->node->str == parent)
		return *current_list_ptr;
	else
	{
		while (1)
		{
			current_list_ptr=current_list_ptr->next;
			if (current_list_ptr->node->str == parent)
				return (current_list_ptr);
		}
	}
	return current_list_ptr;
}
