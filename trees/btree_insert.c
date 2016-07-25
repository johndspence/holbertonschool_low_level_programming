#include "tree_hdr.h"
/**
 * btree_insert - Inserts a new leaf in a binary tree. Makes a recursive call
 * function based on value.
 *
 * @tree: Pointer to the binary tree in which to insert a new node
 * @data: Pointer to string which will be the key value of the node.
 *
 * Description:  Inserts a leaf into a tree, given a pointer to a pointer to
 * a leaf of the tree.  If the first pointer points to NULL, the tree is empty
 * and a memory space for a new leaf is allocated. The new leaf's key value is
 * populated and it's left and right pointers are set to NULL. If the tree is
 * not empty, the key value received as argument is compared to the key value
 * of the node and btree_insert is run recursively on on the left or right
 * pointer of the node for less than, or greater than, respectively.
 */
int btree_insert(BTree **tree, char *data)
{
	if (*tree == NULL)
	{
		*tree = (struct BTree *)malloc(sizeof(struct BTree));
		if (tree == NULL)
			return 1;
		(*tree)->str = strdup(data);
		if ((*tree)->str == NULL)
			return 1;
		(*tree)->left = NULL;
		(*tree)->right = NULL;
	}
	else if ((strcmp(data, (*tree)->str)) < 0)
	{
		btree_insert(&(*tree)->left, data);
	}
	else if ((strcmp(data, (*tree)->str)) > 0)
	{
		btree_insert(&(*tree)->right, data);
	}
	return 0;
}
