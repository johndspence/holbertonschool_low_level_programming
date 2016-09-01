#ifndef _PUSHPOP_H_
#define _PUSHPOP_H_

#include "queue.h"
#include "stack.h"
#include <string.h>
#include <stdlib.h>
#include <stdio.h>

int push_queue(Queue **queue, char *str);
char *pop_queue(Queue **);
int push_stack(Stack **stack, char *str);
char *pop_stack(Stack **stack);
void print_stack(const Stack *);
void free_stack(Stack *stack);
void free_queue(Queue *stack);

#endif
