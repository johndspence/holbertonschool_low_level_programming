#include "tree_hdr.h"

/*
 * Iterate through the path array and search for the each path variable
 */
int node_find(List *cur_lst_ptr, char **path)
{
	int array_len;
	int i;

	array_len = array_length(path);
	i = 0;

	while (i < array_len)
	{
		if (strcmp(cur_lst_ptr->node->str, path[i]) == 0)
		{
			if (i < (array_len - 1))
			{
				if (cur_lst_ptr->node->children == NULL)
				{
					return 0;
				}
				else
				{
					cur_lst_ptr = cur_lst_ptr->node->children;
				}
			}
			if (i == (array_len - 1))
			{
				return 1;
			}
		}
		else
		{
			if (cur_lst_ptr->next == NULL)
			{
				return 0;
			}
			else
			{
				cur_lst_ptr = cur_lst_ptr->next;
			}
		}
	i++;
	}
	return 1;
}

int path_exists(NTree *tree, char **path)
{
	int ret_val;
	List *cur_lst_ptr;
	/*create a list_ptr that points to root node*/
	cur_lst_ptr = new_list();
	cur_lst_ptr->next = NULL;
	cur_lst_ptr->node = tree;
	ret_val = node_find(cur_lst_ptr, path);
	free (cur_lst_ptr);
	return ret_val;
}
