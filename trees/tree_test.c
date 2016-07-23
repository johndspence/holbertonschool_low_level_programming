#include "tree_hdr.h"

int test_insert();

/*
 *You can test your functions with this: gcc -Wall -Werror -Wextra
 * -pedantic tree_test.c btree_find.c btree_insert.c
 */

int main() {
	test_insert();
	return 0;
}

int test_insert() {
	BTree *tree;
	char *string;
	char **array;


	printf("The numbers should be in ascending order.\n");
	tree = NULL;
	btree_insert(&tree, "q - 1");
	btree_insert(&tree, "w - 6");
	btree_insert(&tree, "e - 2");
	btree_insert(&tree, "r - 7");
	btree_insert(&tree, "t - 8");
	btree_insert(&tree, "y - 10");
	btree_insert(&tree, "u - 9");
	btree_insert(&tree, "i - 3");
	btree_insert(&tree, "o - 4");
	btree_insert(&tree, "p - 5");
	print_preorder(tree);
	printf("Now I will try to find an element.\n");
	string = btree_find(tree, "p - 5")->str;
	printf("I think I just found the string: %s\n", string);
	return 0;
}

void print_preorder(BTree *tree)
{
	if (tree == NULL) return;
	printf("%s\n", tree->str);
	print_preorder(tree->left);
	print_preorder(tree->right);
}
