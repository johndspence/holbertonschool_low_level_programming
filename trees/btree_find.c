#include "tree_hdr.h"
/**
 * btree_find - Given a string, finds the leaf in a binary tree which has that
 * same string as it's key value
 *
 * @tree: Pointer to the root leaf of binary tree
 * @str:  The string to be search for in the binary tree
 *
 * Description:  Uses strcmp to compare passed to string to the key value in a
 * leaf and then recursively runs the function on the left- or right-pointed
 * leaf until a match is found.
 */
BTree *btree_find(BTree *tree, char *str)
{
	if (tree != NULL)
	{
		if (strcmp(str, tree->str) == 0)
		{
			return tree;
		}
		else if (strcmp(str, tree->str) < 0)
		{
			return btree_find(tree->left, str);
		}
		else
		{
			return btree_find(tree->right, str);
		}
	}
	else
	{
		return NULL;
	}
}
