#include "tree_hdr.h"

void free_list_ptr(List *cur_lst_ptr)
{
	if (cur_lst_ptr == NULL)
		return;

	if (cur_lst_ptr->next != NULL)
	{
		free_list_ptr (cur_lst_ptr->next);
	}

	if (cur_lst_ptr->node->children != NULL)
	{
		free_list_ptr (cur_lst_ptr->node->children);
	}
	free (cur_lst_ptr->node->str);
	free (cur_lst_ptr->node);
	free (cur_lst_ptr);
}

void ntree_free(NTree *tree)
{
	List *cur_lst_ptr;

	/*create a list_ptr that points to root node*/
	cur_lst_ptr = new_list();
	cur_lst_ptr->next = NULL;
	cur_lst_ptr->node = tree;
	free_list_ptr(cur_lst_ptr);
}
