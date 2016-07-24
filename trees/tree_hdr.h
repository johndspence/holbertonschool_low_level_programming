#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "tree.h"

int test_array_to_btree();
BTree *array_to_btree(char **array);
int btree_insert(BTree **tree, char *data);
void print_preorder(BTree *tree);
BTree *btree_find(BTree *tree, char *str);
BTree *btree_insert_array(char *data);
