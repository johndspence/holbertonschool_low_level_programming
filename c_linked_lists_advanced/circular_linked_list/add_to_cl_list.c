#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "list.h"

/* Add an element at the end of a circular linked list*/
int add_end_cl_list(List **list, char *str)
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

	if (*list == NULL)
	{
		*list = new_node_ptr;
	}
	else
	{
		current_node = *list;
		while (current_node->next != *list)
		{
			current_node = current_node->next;
		}
		current_node->next = new_node_ptr;
	}
	new_node_ptr->next = *list;
	return 0;
}

/* Add an element at the beginning of a circular linked list: */
int add_begin_cl_list(List **list, char *str)
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

	if (*list == NULL)
	{
		new_node_ptr->next = new_node_ptr;
	}
	else
	{
		current_node = *list;
		while (current_node->next != *list)
		{
			current_node = current_node->next;
		}
		current_node->next = new_node_ptr;
		new_node_ptr->next = *list;
	}
	*list = new_node_ptr;
	return 0;
}
