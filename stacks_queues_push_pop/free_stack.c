#include "push_pop_hdr.h"
/**
 * free_stack - frees an entire stack of structs of type Stack
 *
 * @stack: stack is a pointer to stack of type struct Stack
 *
 * Description:  Given a pointer to a stack, the function will free the entire
 * stack
 */
void free_stack(Stack *stack)
{
	if (stack == NULL)
		return ();
	if (stack->next != NULL)
	{
		free_stack(stack->next);
	}
	free(stack->str);
	free(stack);
}
