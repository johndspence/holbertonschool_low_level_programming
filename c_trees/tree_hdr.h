#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "tree.h"

BTree *array_to_btree(char **array);
int btree_insert(BTree **tree, char *data);
void print_preorder(BTree *tree);
BTree *btree_find(BTree *tree, char *str);
BTree *btree_insert_array(char *data);
void btree_free(BTree *tree);
int btree_depth(BTree *tree);
