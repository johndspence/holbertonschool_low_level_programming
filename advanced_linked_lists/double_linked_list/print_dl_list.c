#include <list.h>
#include <stdlib.h>

void print_string(char *str);
int print_char(char c);

void print_dl_list(List *list) {
	List *current_node;

	current_node = list;

	while (current_node)
	{
		print_string(current_node->str);
		print_char('\n');

		if (current_node->prev == NULL)
		{
			print_string("\tNULL\n");
		}
		else
		{
			print_char('\t');
			print_string(current_node->prev->str);
			print_char('\n');
		}
		if (current_node->next == NULL)
		{
			print_string("\tNULL\n");
		}
		else
		{
			print_char('\t');
			print_string(current_node->next->str);
			print_char('\n');
		}
		current_node = current_node->next;
	}
}
