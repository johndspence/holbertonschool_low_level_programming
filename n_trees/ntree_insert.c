#include "tree_hdr.h"


/*
 * Get the right Ntree
 * if children = NULL, children = malloc a new List
 * else while current_list = current_list-<next while !=NULL
 * current_list->next = malloc a new Ntree
 * populate the Ntree with str and NULL
 */

 int array_length(char **array)
 {
 	int i;

 	i = 0;
 	while(array[i] != NULL)

 	{
 		i++;
 	}
 	return i;
 }

List *new_list()
{
List *list_ptr;
list_ptr = (struct List *)malloc(sizeof(struct List));
if (list_ptr == NULL)
	return NULL;
return list_ptr;
}

NTree *new_node(char *data)
{
	NTree *tree;
	tree = (struct NTree *)malloc(sizeof(struct NTree));
	if (tree == NULL)
		return NULL;
	tree->str = strdup(data);
	if (tree->str == NULL)
		return NULL;
	tree->children = NULL;
	return tree;
}
/* Given a current_list_ptr, this function will find the list pointer that
 * points to the node where the new string should be inserted
 */

List *insrt_lctn(List *cur_lst_ptr, char **parents)
{
	int array_len;
	int i;

	array_len = array_length(parents);
	array_len = array_len -1;
	i = 0;
	while (i < array_len)
	{
		if (strcmp(cur_lst_ptr->node->str, parents[i]) == 0)
		{
			cur_lst_ptr = cur_lst_ptr->node->children;
		}
		else
		{
			cur_lst_ptr = cur_lst_ptr->next;
		}
		i++;
	}
	while (strcmp(cur_lst_ptr->node->str, parents[i]) != 0)
	{
		cur_lst_ptr = cur_lst_ptr->next;
	}
	return cur_lst_ptr;
}

int ntree_insert(NTree **tree, char **parents, char *data)
{
	List *cur_lst_ptr;
	List *tmp_lst_ptr;
	List *tmp_lst_ptr2;

	/* Create a List that points to root node in order to 1) iterate to reuse the
	 * new node function for the root node creation and 2) iterate through the
	 * array and tree with only one algorithm */
	tmp_lst_ptr = new_list();
	tmp_lst_ptr->next = NULL;
	tmp_lst_ptr->node = *tree;

	/* If tree points to NULL, there is no root node; create it */
	if (*tree == NULL)
	{
		*tree = new_node(data);
		tree = &(*tree);
		free(tmp_lst_ptr);
		return 0;
	}
	else
	{
		/* Find the correct location */
		cur_lst_ptr = insrt_lctn(tmp_lst_ptr, parents);
		/* Create a new list and node and populate the node with str */
		tmp_lst_ptr2 = cur_lst_ptr->node->children;
		cur_lst_ptr->node->children = new_list();
		cur_lst_ptr->node->children->node = new_node(data);

		/* Insert new node at beginning of linked list */
		cur_lst_ptr->node->children->next = tmp_lst_ptr2;
		free(tmp_lst_ptr);
	}
	return 0;
}
