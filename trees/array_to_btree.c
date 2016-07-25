#include "tree_hdr.h"

BTree *array_to_btree(char **array)
{
	int i;
	int ret_val;
	BTree *tree;

	tree = NULL;
	i = 0;
	while (i < 10)
	{
		printf(" I am array_ptr[i]%s\n", array[i]);
		ret_val = btree_insert(&tree, array[i]);
		if (ret_val == 1)
			return NULL;
		i++;
	}
printf(" I have exited the loop\n");
btree_free(&tree);
return tree;
}
