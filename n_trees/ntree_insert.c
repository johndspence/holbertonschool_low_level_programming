#include "tree_hdr.h"

/*Get the right Ntree
 * if children = NULL, children = malloc a new List
 * else while current_list = current_list-<next while !=NULL
 * current_list->next = malloc a new Ntree
 * populate the Ntree with str and NULL
 */

int array_length(char **array);

int ntree_insert(NTree **tree, char **parents, char *data)
{
	int array_len;
	NTree current_ntree;
	NTree current_list;


	array_len = array_lenth(parents);


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
		current_ntree = **tree;
	}
	else
	{
		current_ntree = **tree;

		current_ntree = *correct_ntree(&current_ntree, parents, array_len)
		if (current_ntree->children == NULL)
		{
			current_ntree->children = (struct List *)malloc(sizeof(struct List));
			if current_ntree->children = NULL
				return 1;
			current_ntree->children->next = NULL;
			current_ntree->children->node = (struct NTree *)malloc(sizeof(struct NTree));
			return 0;
		}
		else
		{
			current_list = current_ntree->children;
			while (current_list->next != NULL)
				{
					current_list = current_list->next;
				}
			current_list->next = (struct List *)malloc(sizeof(struct List));
			if current_list->next = NULL
				return 1;
			current_list = current_list->next;
			current_list->next = NULL;
			current_list->node = (struct NTree *)malloc(sizeof(struct Ntree));
			if current_list->node = NULL
				return 1;
			current_ntree = current_list->node;
			current_ntree->str = data;
			current_ntree->children = NULL
			return 0;
		}
	}
}
