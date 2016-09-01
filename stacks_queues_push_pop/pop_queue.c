#include "push_pop_hdr.h"
/**
 * pop_queue - dequeues an element from a queue
 *
 * @arg: Receives a pointer to a pointer to a struct of type Queue
 *
 * Description:  Given a pointer to a pointer to a linked list of structs, if a
 * struct exists, the function returns the string element of the struct, sets
 * pointer to a struct to point to the next struct, and frees the first struct.
 */
char *pop_queue(Queue **queue)
{
	Queue *tmp_queue_ptr;
	char *ret_str;

	if (*queue == NULL)
		return NULL;
	if ((*queue)->str != NULL)
		ret_str = strdup((*queue)->str);
	tmp_queue_ptr = *queue;
	if ((*queue)->next != NULL)
		*queue = (*queue)->next;
	free (tmp_queue_ptr->str);
	free (tmp_queue_ptr);
	return ret_str;
}
