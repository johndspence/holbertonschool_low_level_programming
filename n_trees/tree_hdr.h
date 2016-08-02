#ifndef _TREE_HDR_
#define _TREE_HDR_

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "tree.h"

int array_length(char **);
int print_char(char c);
int ntree_insert(NTree **tree, char **parents, char *data);
void ntree_print(NTree *tree);
void ntree_free(NTree *tree);
char **string_split(const char *string, char separator);
void free_str_array(char **array);
List *new_list();
NTree *new_node(char *data);
int path_exists(NTree *tree, char **path);
List *insrt_lctn(List *cur_lst_ptr, char **parents);
void free_list_ptr(List *cur_lst_ptr);

#endif
