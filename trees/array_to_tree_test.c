#include "tree_hdr.h"

int test_array_to_btree();

int main() {
	test_array_to_btree();
	return 0;
}

int test_array_to_btree() {
	BTree *tree;
	char *array[];

	printf("I will now enter an array into the binary tree.\n");
	array[0] = "2 Joes";
	array[1] = "2 Johns";
	array[2] = "and 2 Ricks 2";
	array[3] = "Alex";
	array[4] = "Asaia";
	array[5] = "Tasneem";
	tree = array_to_btree(&array);
	print_preorder(tree);
	return 0;
}

void print_preorder(BTree *tree)
{
	if (tree == NULL) return;
	printf("%s\n", tree->str);
	print_preorder(tree->left);
	print_preorder(tree->right);
}
