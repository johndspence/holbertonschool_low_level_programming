#include "tree_hdr.h"

List *free_last_node(List *cur_lst_ptr)
{
	List *prev_lst_ptr;
/*if (cur_lst_ptr->node == NULL)
	return;*/

printf("I started; will iterate until cur_lst_ptr->next == NULL)\n\n");
	while (cur_lst_ptr->next != NULL)
	{
		prev_lst_ptr = cur_lst_ptr;
		cur_lst_ptr = cur_lst_ptr->next;
		printf("cur_lst_ptr->next must not have been NULL\n");
	}
printf("Now I'll check if cur_lst_ptr->node->children == NULL\n\n");
	if (cur_lst_ptr->node->children == NULL)
	{
		printf("cur_lst_ptr->node->children == NULL so I'll free some stuff\n\n");
		prev_lst_ptr->next = NULL;
		/*return(cur_lst_ptr);
		free(cur_lst_ptr->node->children);
		free(cur_lst_ptr->node->str);
		free(cur_lst_ptr->node);
		free(cur_lst_ptr->next);
		free(cur_lst_ptr);*/
		return(cur_lst_ptr);
		printf("So I just freed some stuff\n\n");

	}
	else
	{
		cur_lst_ptr = cur_lst_ptr->node->children;
		printf("cur_lst_ptr->node->children != NULL so I'll recurse\n\n");
		free_last_node (cur_lst_ptr);
	}
return(cur_lst_ptr);
}

void ntree_free(NTree *tree)
{
	List *root_lst_ptr;
	List *cur_lst_ptr;

	/*create a list_ptr that points to root node*/
	root_lst_ptr = new_list();
	root_lst_ptr->next = NULL;
	root_lst_ptr->node = tree;

	cur_lst_ptr = free_last_node(root_lst_ptr);

	free(cur_lst_ptr->node->children);
	free(cur_lst_ptr->node->str);
	free(cur_lst_ptr->node);
	free(cur_lst_ptr->next);

	cur_lst_ptr = free_last_node(root_lst_ptr);

	free(cur_lst_ptr->node->children);
	free(cur_lst_ptr->node->str);
	free(cur_lst_ptr->node);
	free(cur_lst_ptr->next);


	free (root_lst_ptr->next);
	free (root_lst_ptr->node->str);
	free (root_lst_ptr->node->children);
	free (root_lst_ptr->node);
	free (root_lst_ptr);
	/*free (cur_lst_ptr);*/

}
