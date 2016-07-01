#include <list.h>
#include <stdlib.h>

void print_string(char *str);
int print_char(char c);
void print_last_node(List *current_node);

/* Print all nodes except the last one*/
void print_cl_list(List *list) {
	List *current_node;

	current_node = list;

	while (current_node->next != list)
	{
		print_string(current_node->str);
		print_char('\n');
		print_char('\t');
		print_string(current_node->next->str);
		print_char('\n');
		current_node = current_node->next;
	}
	print_last_node(current_node);
}

/* Print last node */
void print_last_node(List *current_node) {
	print_string(current_node->str);
	print_char('\n');
	print_char('\t');
	print_string(current_node->next->str);
	print_char('\n');
}
