#include "tree_hdr.h"
/**
 * array_length - Returns the length of an array of char *
 *
 * @array: Point to an array of char *
 *
 * Description:  Iterates through the array and returns the length
 */
 int array_length(char **array)
 {
 	int i;

 	i = 0;
 	while(array[i] != NULL)

 	{
 		i++;
 	}
 	return i;
 }

List *new_list()
{
List *list_ptr;
list_ptr = (struct List *)malloc(sizeof(struct List));
if (list_ptr == NULL)
	return NULL;
return list_ptr;
}
/**
 * new_ntree - Returns the address of a newly created instance of struct NTree
 *
 * @data: char * containing a string to insert into the new struct NTree
 *
 * Description:  mallocs and creates a new NTree.  Populates the str element
 * with a malloc-ed duplicate of data.
 */
NTree *new_ntree(char *data)
{
	NTree *tree;
	tree = (struct NTree *)malloc(sizeof(struct NTree));
	if (tree == NULL)
		return NULL;
	tree->str = strdup(data);
	if (tree->str == NULL)
		return NULL;
	tree->children = NULL;
	return tree;
}
/**
 * insrt_lctn - From an n-tree, returns a pointer to a struct List denoting the
 * correct insertion point for a new element.
 *
 * @ins_lst_ptr: A temporary list pointer pointing to a temporary struct List,
 * thus providing a consistent entry point into the tree.
 *
 * @parents: An array of char * holding the directory path for a the new
 * element.
 *
 * Description:  Given a pointer to a struct List, insrt_lctn will traverse the
 * N-tree and return a pointer to a struct List.  This struct List's node
 * element points to a struct NTree holding the final element in the path; we
 * insert our new struct List and struct Ntree underneath this struct NTree.
 */
List *insrt_lctn(List *ins_lst_ptr, char **parents)
{
	int array_len;
	int i;

	array_len = array_length(parents);
	i = 0;
	/*
	 * Iterate through parents/path, except for the last element of parents/
	 * path. When we exit this while loop, we have the correct struct List and
	 * struct NTree for the second to the last element of the parents/path.
	 */
	while (i < array_len - 1)
	{
		if (strcmp(ins_lst_ptr->node->str, parents[i]) == 0)
		{
			ins_lst_ptr = ins_lst_ptr->node->children;
			i++;
		}
		else
		{
			ins_lst_ptr = ins_lst_ptr->next;
		}
	}
	/*
	 * parents[i] is now the final element in the array.  We handle this element
	 * separately because the logic above depends on "children" not being NULL
	 * and the final element of our path may have children equal to NULL
	 */
	while (strcmp(ins_lst_ptr->node->str, parents[i]) != 0)
	{
		ins_lst_ptr = ins_lst_ptr->next;
	}
	return ins_lst_ptr;
}
/**
 * ntree_insert - Inserts a new data element into a n-tree.
 *
 * @tree: A pointer to a pointer to a root struct NTree of a n-tree.
 *
 * @parents: An array of char * holding the directory path for a the new
 * element.
 *
 * @data: char * containing a string, the new element to insert into the n-tree.
 *
 * Description:
 */
int ntree_insert(NTree **tree, char **parents, char *data)
{
	List *ins_lst_ptr;
	List *tmp_lst_ptr;
	List *tmp_lst_ptr2;

	/*
	 * If tree holds NULL, there is no root NTree; create it and populate it's
	 * str element with data.
	 */
	if (*tree == NULL)
	{
		*tree = new_ntree(data);
		tree = &(*tree);
		return 0;
	}
	else
	{
		/*
		 * Create a temporary pointer to a struct List and the corresponding
		 * (also temporary) struct List itself. Set the node element of the
		 * struct List to point to the first struct NTree by reusing the pointer
		 * address held at *tree. This temporary pointer and struct used to
		 * provide a consistent pattern upon which to design the tree traversal
		 * logic
		 */
		tmp_lst_ptr = new_list();
		tmp_lst_ptr->next = NULL;
		tmp_lst_ptr->node = *tree;
		/*
		 * Find the correct struct List and struct NTree, under which we insert
		 * the new List and Ntree. Do not modify tmp_lst_ptr, because we will
		 * use it later to free the temporary NTree.
		 */
		ins_lst_ptr = insrt_lctn(tmp_lst_ptr, parents);
		/* Create a new list and node and populate the node with str */
		tmp_lst_ptr2 = ins_lst_ptr->node->children;
		ins_lst_ptr->node->children = new_list();
		ins_lst_ptr->node->children->node = new_ntree(data);

		/* Insert new node at beginning of linked list */
		ins_lst_ptr->node->children->next = tmp_lst_ptr2;
		free(tmp_lst_ptr);
	}
	return 0;
}
