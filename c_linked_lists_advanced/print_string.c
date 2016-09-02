#include <unistd.h>

int print_char(char c);
/* print_string using print_char */
void print_string(char *str) {
	int i = 0;
	while ( *(str+i) != '\0' )
	{
		print_char( *(str+i));
		i++;
	}
}
