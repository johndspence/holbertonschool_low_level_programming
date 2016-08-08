#include "push_pop_hdr.h"
#include <stdio.h>
/**
 * push_queue - Enqueues an element to a list
 *
 * @queue: Receives a pointer to a pointer to a struct of type Queue and a string
 * to populate the struct
 *
 * @str: String to be populated in the queue
 *
 * Description:  Given a pointer to a pointer to a linked list of structs, if a
 * struct does not exist, the function creates a struct, populates it with str,
 * and sets the pointer to struct to point to the newly created struct. If a
 * does exist, the function inserts a newly created and populated struct at the
 * beginning of the list.
 */

int push_queue(Queue **queue, char *str)
{
	Queue *tmp_queue_ptr;

	if (*queue == NULL)
	{
		tmp_queue_ptr = (struct Queue *)malloc(sizeof(struct Queue));
		if (tmp_queue_ptr == NULL)
			return (1);
		tmp_queue_ptr->str = strdup(str);
		if (tmp_queue_ptr->str == NULL)
			return (1);
		tmp_queue_ptr->next = NULL;
		*queue = tmp_queue_ptr;
	}
	else
	{
		tmp_queue_ptr = *queue;
		while (tmp_queue_ptr->next != NULL)
		{
			tmp_queue_ptr = tmp_queue_ptr->next;
		}
		tmp_queue_ptr->next = (struct Queue *)malloc
			(sizeof(struct Queue));
		if (tmp_queue_ptr->next == NULL)
			return (1);
		tmp_queue_ptr = tmp_queue_ptr->next;
		tmp_queue_ptr->str = strdup(str);
		if (tmp_queue_ptr->str == NULL)
			return (1);
		tmp_queue_ptr->next = NULL;
	}
	return (0);
}
