#include "tree_hdr.h"

BTree *array_to_btree(char **array)
{
	int i;
	BTree *tree;

	tree = NULL;
	i = 0;
	while (array[i] != '\0')
	{
		printf(" I am array_ptr[i]%s\n", array[i]);
		btree_insert(&tree, array[i]);
		i++;
	}
printf(" I have exited the loop\n");
return tree;
}
