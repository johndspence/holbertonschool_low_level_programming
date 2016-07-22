#include "tree_hdr.h"

int btree_insert(BTree **tree, char *data){
	if( *tree == 0 )
	{
		*tree =(struct BTree*)malloc(sizeof(struct BTree));
		if (tree == NULL)
			return 1;
		(*tree)->str = strdup(data);
		if ((*tree)->str == NULL)
			return 1;
		(*tree)->left = NULL;
		(*tree)->right = NULL;
	}
	else if ((strcmp(data,(*tree)->str)) < 0)
	{
		btree_insert(&(*tree)->left, data);
	}
	else if ((strcmp(data,(*tree)->str)) > 0)
	{
		btree_insert(&(*tree)->right, data);
	}
	return 0;
}
