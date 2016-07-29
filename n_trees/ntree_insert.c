#include "tree_hdr.h"

/*Get the right Ntree
 * if children = NULL, children = malloc a new List
 * else while current_list = current_list-<next while !=NULL
 * current_list->next = malloc a new Ntree
 * populate the Ntree with str and NULL
 */

int ntree_insert(NTree **tree, char **parents, char *data)
{
	int array_len;
	NTree *current_ntree_ptr;
	List *current_list_ptr;

	if (*tree == NULL)
	{
		/* Create root Ntree node */
		*tree = (struct NTree *)malloc(sizeof(struct NTree));
		if (*tree == NULL)
			return 1;
		/* Populate Ntree string with pointer to data */
		(*tree)->str = strdup(data);
		if ((*tree)->str == NULL)
			return 1;
		/* Populate root node children with NULL */
		(*tree)->children = NULL;
		current_ntree_ptr = *tree;
	}
	else
	{
		current_ntree_ptr = *tree;
		array_len = array_length(parents);
		current_ntree_ptr = correct_ntree_ptr(current_ntree_ptr, parents, array_len);
		if (current_ntree_ptr->children == NULL)
		{
			current_ntree_ptr->children = (struct List *)malloc(sizeof(struct List));
			if (current_ntree_ptr->children == NULL)
				return 1;
			current_ntree_ptr->children->next = NULL;
			current_ntree_ptr->children->node = (struct NTree *)malloc(sizeof(struct NTree));
			return 0;
		}
		else
		{
			current_list_ptr = current_ntree_ptr->children;
			while (current_list_ptr->next != NULL)
				{
					current_list_ptr = current_list_ptr->next;
				}
			current_list_ptr->next = (struct List *)malloc(sizeof(struct List));
			if (current_list_ptr->next == NULL)
				return 1;
			current_list_ptr = current_list_ptr->next;
			current_list_ptr->next = NULL;
			current_list_ptr->node = (struct NTree *)malloc(sizeof(struct NTree));
			if (current_list_ptr->node == NULL)
				return 1;
			current_ntree_ptr = current_list_ptr->node;
			current_ntree_ptr->str = data;
			current_ntree_ptr->children = NULL;
		}
	}
	return 0;
}
