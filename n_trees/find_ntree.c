#include "tree_hdr.h"


NTree* correct_ntree_ptr(NTree *current_ntree_ptr, char* parent)
{
	/*We receive a pointer to the root node and one parent value. It must have children
	because otherwise array length would be 0*/
	List *current_list_ptr;

	current_list_ptr = current_ntree_ptr->children;
	while (current_list_ptr->node->str != parent)
		{
			current_list_ptr = current_list_ptr->next;
		}
	printf("from find_trees %s\n", current_ntree_ptr->str);
	return current_list_ptr->node;
}
