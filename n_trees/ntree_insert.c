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

		printf("completed root insert\n");
	}
	/* Tree not null but has no children-create a list and a node under root
	there is omly one element in the array*/
	current_ntree_ptr = *tree;
	if (current_ntree_ptr->children == NULL)/*We were given a one layer tree*/
		{
			current_ntree_ptr->children = (struct List *)malloc(sizeof(struct List));
			if (current_ntree_ptr->children == NULL)
				return 1;
			current_list_ptr = current_ntree_ptr->children;
			current_list_ptr->next = NULL;
			current_list_ptr->node = (struct NTree *)malloc(sizeof(struct NTree));
			if (current_list_ptr->node == NULL)
				return 1;
			current_ntree_ptr = current_list_ptr->node;
			current_ntree_ptr->str = strdup(data);
			current_ntree_ptr->children = NULL;
			printf("Just made root node\n");
			return 0;
		}
	if (current_ntree_ptr->children != NULL)
		/* Yes I have children.  Find the right node and create a list and a node underneath it
		we were given the root node*/
		{
			array_len = array_length(parents);
			printf("just got array length = %d\n",array_len);
			/* Find the right node by iterating through the array */
			while (i < array_len)
			{
				current_ntree_ptr = correct_ntree_ptr(current_ntree_ptr, parents[i]);
				i++;
			}

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
			current_ntree_ptr->str = strdup(data);
			current_ntree_ptr->children = NULL;
			printf("Just made new node\n");

		}
	return 0;
}
