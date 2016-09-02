#include "push_pop_hdr.h"
/**
 * free_queue - frees an entire queue of structs of type Queue
 *
 * @queue: queue is a pointer to queue of type Queue
 *
 * Description:  Given a pointer to a queue, the function will free the entire
 * queue
 */
void free_queue(Queue *queue)
{
	if (queue == NULL)
		return ();
	if (queue->next != NULL)
	{
		free_queue(queue->next);
	}
	free(queue->str);
	free(queue);
}
