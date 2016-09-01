#include "my_functions.h"

/* prints a string using pointer of array str plus 1 */
void print_string(char *str){
	int i = 0;
	while ( *(str+i) != '\0' ){
		print_char( *(str+i));
		i++;
}

}