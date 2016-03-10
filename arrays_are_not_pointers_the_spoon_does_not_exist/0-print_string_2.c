#include "my_functions.h"
#include <stdio.h>

/* prints a string using pointer of array str incrementing by 2 */
void print_string_2(char *str){
	int i = 0;
	while ( *(str+i) != '\0' ){
		print_char( *(str+i));
		i=i+2;
	}
}
