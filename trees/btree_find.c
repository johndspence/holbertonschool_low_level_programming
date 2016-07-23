#include "tree_hdr.h"

BTree *btree_find(BTree *tree, char *str)
{
	if (tree != NULL){
		if (strcmp(str,tree->str) == 0 )
		{
			return tree;
		}
		else if (strcmp(str,tree->str) < 0 )
		{
			return (btree_find(tree->left,str));
		}
		else
		{
			return (btree_find(tree->right,str));
		}
	}
	else return NULL;
}
