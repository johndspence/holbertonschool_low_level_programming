#include "tree_hdr.h"

BTree *btree_find(BTree *tree, char *str){
	if (tree != NULL){
		if (strcmp(str,(tree)->str) == 0 )
		{
			return tree;
		}
		else if (strcmp(str,(tree)->str) > 0 )
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


/*
struct node *search(int key, struct node *leaf)
{
  if( leaf != NULL )
  {
      if(key==leaf->key_value)
      {
          return leaf;
      }
      else if(key<leaf->key_value)
      {
          return search(key, leaf->left);
      }
      else
      {
          return search(key, leaf->right);
      }
  }
  else return NULL;
}
*/
