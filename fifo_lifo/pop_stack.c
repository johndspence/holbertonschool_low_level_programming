#include "push_pop_hdr.h"
/**
 * pop_stack - dequeues an element from a stack
 *
 * @stack: Receives a pointer to a pointer to a struct of type Stack
 *
 * Description: Given a pointer to a pointer to a linked list of structs, if a
 * struct exists, the function returns the string element of the struct, sets
 * pointer to a struct to point to the next struct, and frees the first struct.
 */
char *pop_stack(Stack **stack)
{
	Stack *tmp_stack_ptr;
	char *ret_str;

	if (*stack == NULL)
		return (NULL);

	ret_str = strdup((*stack)->str);
	tmp_stack_ptr = *stack;
	*stack = (*stack)->next;
	free(tmp_stack_ptr->str);
	free(tmp_stack_ptr);
	return (ret_str);
}
