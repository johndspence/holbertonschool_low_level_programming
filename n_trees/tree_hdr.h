#ifndef _TREE_HDR_
#define _TREE_HDR_

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "tree.h"

int print_char(char c);
Ntree *correct_ntree(Ntree *current_ntree, array, array_len);
int ntree_insert(NTree **tree, char **parents, char *data);
int ntree_insert(NTree **, char **, char *);
void ntree_print(NTree *);
void ntree_free(NTree *);
char **string_split(const char *, char);
void free_str_array(char **);

#endif
