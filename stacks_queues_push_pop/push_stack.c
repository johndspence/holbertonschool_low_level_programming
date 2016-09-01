#include "push_pop_hdr.h"
#include <stdio.h>
/**
 * push_stack - Enqueues an element to the top of a stack
 *
 * @stack: Receives a pointer to a pointer to a struct of type Stack and a
 * string to populate the struct
 *
 * @str: String to be populated in the stack
 *
 * Description: Given a pointer to a pointer to a linked list of structs, if a
 * struct does not exist, the function creates a struct, populates it with str,
 * and sets the pointer to struct to point to the newly created struct. If a
 * does exist, the function inserts a newly created and populated struct at the
 * beginning of the stack.
 */
int push_stack(Stack **stack, char *str)
{
	Stack *tmp_stack_ptr;

	if (str == NULL)
		return (1);

	if (*stack == NULL)
	{
		tmp_stack_ptr = (struct Stack *)malloc(sizeof(struct Stack));
		if (tmp_stack_ptr == NULL)
			return (1);
		tmp_stack_ptr->str = strdup(str);
		if (tmp_stack_ptr->str == NULL)
			return (1);
		tmp_stack_ptr->next = NULL;
		*stack = tmp_stack_ptr;
	}
	else
	{
		tmp_stack_ptr = *stack;
		*stack = (struct Stack *)malloc(sizeof(struct Stack));
		if (*stack == NULL)
			return (1);
		(*stack)->str = strdup(str);
		if ((*stack)->str == NULL)
			return (1);
		(*stack)->next = tmp_stack_ptr;
	}
	return (0);
}
