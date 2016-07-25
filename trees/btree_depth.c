#include "tree_hdr.h"
/**
 * btree_depth - Calculates the depth of a binary tree
 *
 * @tree: Pointer to root leaf of a binary tree
 *
 * Description:  Receives pointer to root node of a binary tree.  If pointer
 * points to NULL, the tree is empty.  Otherwise call the function recursively
 * and add 1 for the current leag
 */
int btree_depth(BTree *tree)
{
	int ldepth;
	int rdepth;

	if (tree == NULL)
	{
		return 0;
	}
	else
	{
		ldepth = btree_depth(tree->left);
		rdepth = btree_depth(tree->right);
	}
	if (ldepth > rdepth)
	{
		return (ldepth + 1);
	}
	else
	{
		return (rdepth + 1);
	}
	return 0;
}
