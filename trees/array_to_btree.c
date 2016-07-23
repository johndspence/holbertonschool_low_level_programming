#include "tree_hdr.h"

BTree *array_to_btree(char **array)
{
	int i;
	BTree *tree;

	i = 0;
	while (array[i++])
	{
		tree = btree_insert_array(array[i]);
	}
return tree;
}

BTree *btree_insert_array(char *data)
{
	BTree *tree;

	btree_insert(&tree, data);
	return tree;
}
