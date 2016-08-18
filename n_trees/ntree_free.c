#include "tree_hdr.h"
/**
 * free_list_ptr - Frees an n-tree.
 *
 * @cur_lst_ptr: Pointer to first List (TOP) of an n-tree.
 *
 * Description: Given a temporary struct List and struct Ntree, the function
 * recursively traverses the ntree, and frees the List and NTree when both
 * next and children of the combined "super"struct List.node->children are NULL
 */
/* Free next, free children, and free cur lst ptr itself */
int i = 0;
int t = 0;
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
/**
 * ntree_free - Frees an n-tree.
 *
 * @tree: A pointer to the root struct of an NTree
 *
 * Description:  Given a pointer to the root struct of an NTree, the function
 * creates a temporary struct List and Struct NTree to complete a consistent
 * data structure, which then allows for a simple recursive traversal of the
 * tree in the called ftn free_list_ptr.
 */
void ntree_free(NTree *tree)
{
	List *cur_lst_ptr;
	/*create a list_ptr that points to root node*/
	cur_lst_ptr = new_list();
	cur_lst_ptr->next = NULL;
	cur_lst_ptr->node = tree;
	free_list_ptr(cur_lst_ptr);
}
