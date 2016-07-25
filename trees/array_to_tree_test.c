#include "tree_hdr.h"

int test_array_to_btree();

int main() {
	test_array_to_btree();
	return 0;
}

int test_array_to_btree()
{
	BTree *tree;
	char **array;
	char *array_data[10];

	printf("I will now enter an array into the binary tree.\n");
	array_data[0] = "q - 1";
	array_data[1] = "w - 6";
	array_data[2] = "e - 2";
	array_data[3] = "r - 7";
	array_data[4] = "t - 8";
	array_data[5] = "y - 10";
	array_data[6] = "u - 9";
	array_data[7] = "i - 3";
	array_data[8] = "o - 4";
	array_data[9] = "p - 5";
	array = array_data;
	tree = array_to_btree(array);
	print_preorder(tree);
	return 0;
}

void print_preorder(BTree *tree)
{
	if (tree == NULL) return;
	printf("tree-> ?%s\n", tree->str);
	print_preorder(tree->left);
	print_preorder(tree->right);
}
