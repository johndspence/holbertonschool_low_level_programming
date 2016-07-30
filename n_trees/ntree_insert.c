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
	int i;

	List *current_list_ptr;

	/* If tree points to NULL, there is no root node; create it */
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
		printf("completed root insert\n");
		return 0;
	}
	else /*tree is not NULL but children might be*/
	{
		/* Find the right node by iterating through the array */
		array_len = array_length(parents);
		printf("just got array length = %d\n", array_len);

		current_list_ptr = (struct List *)malloc(sizeof(struct List));
		current_list_ptr->next = NULL;
		current_list_ptr->node = *tree;

		i = 1;
		while (i < array_len)
		{
			if (strcmp(current_list_ptr->node->str, parents[i]) == 0)
			{
				current_list_ptr = current_list_ptr->node->children;
			}
			else
			{
				while (strcmp(current_list_ptr->node->children->node->str, parents[i]) != 0)
					current_list_ptr = current_list_ptr->node->children->next;
			}
			i++;
		}
		if (current_list_ptr->node->children == NULL)
		{
			current_list_ptr->node->children = (struct List *)malloc(sizeof(struct List));
			current_list_ptr->node->children->next = NULL;
			current_list_ptr->node->children->node = (struct NTree *)malloc(sizeof(struct NTree));
			current_list_ptr->node->children->node->str = data;
			current_list_ptr->node->children->node->children = NULL;
		}
		else
		{
			current_list_ptr = current_list_ptr->node->children;
			while (current_list_ptr->next != NULL)
			{
				current_list_ptr = current_list_ptr->next;
			}
			current_list_ptr->next = (struct List *)malloc(sizeof(struct List));
			if (current_list_ptr->next == NULL)
				return 1;
			current_list_ptr->next->next = NULL;
			current_list_ptr->next->node = (struct NTree *)malloc(sizeof(struct NTree));
			current_list_ptr->next->node->str = data;
			current_list_ptr->next->node->children = NULL;
		}
	}
	return 0;
}
