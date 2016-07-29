#ifndef _TREE_HDR_
#define _TREE_HDR_

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "tree.h"

int array_length(char **);
int print_char(char c);
NTree* correct_ntree_ptr(NTree *current_ntree_ptr, char* parent);
int ntree_insert(NTree **tree, char **parents, char *data);
void ntree_print(NTree *tree);
void ntree_free(NTree *tree);
char **string_split(const char *string, char separator);
void free_str_array(char **array);


#endif
