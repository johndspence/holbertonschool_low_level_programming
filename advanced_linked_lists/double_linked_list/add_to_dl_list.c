#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "list.h"

/* Add an element at the beginning of a double linked list: */
/*int add_begin_dl_list(List **list, char *str);*/

/* add-node function:  Receive arguments, call str_len and
 * copy_string and return 0 to main if successful and 1 to main
 * if unsuccessful */
/* Add an element at the end of a double linked list*/

int add_begin_dl_list(List **list, char *str)
{
	char *stringcopy;
	List *new_node_ptr;
	List *current_node;

	/* Set list to point to currentnode */
	stringcopy = strdup(str);
	if (stringcopy == NULL)
		return 1;

	new_node_ptr = malloc(sizeof(List));
	if (new_node_ptr == NULL)
		return 1;
	new_node_ptr->str = stringcopy;
	new_node_ptr->prev = NULL;

	if (*list == NULL)
	{
		new_node_ptr->next = NULL;
	}
	else
	{
		current_node = *list;
		current_node->prev = new_node_ptr;
		new_node_ptr->next = *list;
	}
	*list = new_node_ptr;
	return 0;
}

int add_end_dl_list(List **list, char *str)
{
	char *stringcopy;
	List *new_node_ptr;
	List *current_node;

	/* Set list to point to currentnode */
	stringcopy = strdup(str);
	if (stringcopy == NULL)
		return 1;

	new_node_ptr = malloc(sizeof(List));
	if (new_node_ptr == NULL)
		return 1;
	new_node_ptr->str = stringcopy;
	new_node_ptr->next = NULL;

	if (*list == NULL)
	{
		*list = new_node_ptr;
		new_node_ptr->prev = NULL;
	}
	else
	{
		current_node = *list;
		while (current_node->next != NULL)
		{
			current_node = current_node->next;
		}
		current_node->next = new_node_ptr;
		new_node_ptr->prev = current_node;
	}
	/* We just populated currentnode.str with a pointer to a new string
	 * and current node.next and moved the pointer to the new node
	 */
	 return 0;
}
