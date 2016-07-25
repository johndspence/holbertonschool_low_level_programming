#include "tree_hdr.h"
/**
 * array_to_btree - Places array of strings into a binary tree
 *
 * @array: Pointer to array of strings that will be placed in the key values of
 * the binary tree
 *
 * Description:  Receives an array of strings, iterates through the array, and
 * passes each string to a function to insert the string into a binary tree
 */
BTree *array_to_btree(char **array)
{
	int i;
	int ret_val;
	BTree *tree;

	tree = NULL;
	i = 0;
	while (array[i] != '\0')
	{
		ret_val = btree_insert(&tree, array[i]);
		if (ret_val == 1)
			return NULL;
		i++;
	}
return tree;
}
