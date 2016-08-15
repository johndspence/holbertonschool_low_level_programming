#include "tree_hdr.h"
/**
 * path_check - Returns 1 if all elements of an array of char * are found in an
 * n-tree.
 *
 * @cur_lst_ptr: Pointer to the root struct List of an n-tree.
 * @path: An array of char * holding possible elements of an n-tree.
 *
 * Description: Given a pointer to a temporary struct List, serving as an entry
 * point to an n-tree, and an array of char *, the function traverses the n-tree
 * and determines if all elements of the char * array exist in the correct
 * hierarchy.
 */
int path_check(List *cur_lst_ptr, char **path)
{
	int array_len;
	int i;

	array_len = array_length(path);
	i = 0;
	while (i < array_len)
	{
		/* Check for a match in the current List/Ntree */
		if (strcmp(cur_lst_ptr->node->str, path[i]) == 0)
		{
			/*
			 * If there is a match at the current List/NTree, and we haven't
			 * yet reached the last element of path, check to see if there is
			 * a lower List/NTree to hold subsequent elements of path. If false,
			 * return 0 because there the full path cannot exist. If true, move
			 * cur_lst_ptr to point to this lower List/NTree.
			 */
			if (i < (array_len - 1))
			{
				/*
				 * If children holds NULL, the full path cannot exist because
				 * there is no lower List/NTree to hold subsequent path elements
				 * . return 0.
				 */
				if (cur_lst_ptr->node->children == NULL)
				{

					return 0;
				}
				/* move cur_lst_ptr to point to this lower List/NTree */
				else
				{
					cur_lst_ptr = cur_lst_ptr->node->children;
				}
			}
			/*
			 * If there is a match at the current List/NTree, and we HAVE
			 * reached the last element of path, the full path does exist.
			 * return 1.
			 */
			if (i == (array_len - 1))
			{
				return 1;
			}
			/*
			 * All elements of path, except for the final element, have been
			 * found. Iterate to next element of path and check it by repeating
			 * the entire while loop.
			 */
			i++;
		}
		else
		{
			/*
			 * If there is no match in the current List/NTree and there is no
			 * "next" (rightward) List/NTree to check, the path cannot exist
			 * return 0.
			 */
			if (cur_lst_ptr->next == NULL)
			{
				return 0;
			}
			else
			/*
			 * If there is no match in the current List/NTree but there IS a
			 * rightward List/NTree to check, move cur_lst_ptr to point to this
			 * rightward List/NTree, and check it by repeating the entire while
			 * loop.
			 */
			{
				cur_lst_ptr = cur_lst_ptr->next;
			}
		}
	}
	return 1;
}
/**
 * path_exists - Returns 1 if all elements of an array of char * are found in an
 * n-tree.
 *
 * @tree: Pointer to the root struct NTree of an n-tree.
 * @path: An array of char * holding possible elements of an n-tree.
 *
 * Description: Given a pointer to the root struct NTree of an n-tree and an
 * array of char *, the function creates a temporary pointer to a struct List
 * a the pointee struct List, to allow for single logic to traverse the n-tree.
 * The function passes path and the pointer to struct List to the path_check
 * function.
 */
int path_exists(NTree *tree, char **path)
{
	int ret_val;
	List *cur_lst_ptr;

	/*
	 * Create a temporary cur_lst_ptr that points to root NTree to allow for a
	 * single logic to traverse the entire NTree.
	 */
	cur_lst_ptr = new_list();
	cur_lst_ptr->next = NULL;
	cur_lst_ptr->node = tree;
	ret_val = path_check(cur_lst_ptr, path);
	free (cur_lst_ptr);
	return ret_val;
}
