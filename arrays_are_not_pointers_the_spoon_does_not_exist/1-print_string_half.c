#include "my_functions.h"
#include <stdio.h>

/* prints second half of a string by counting length, dividing by 2 */
/* and iterating on string from halfway point until \0 */ 
void print_string_half(char *str){
int j = 0;
int i = 0;
while (*(str+i) != '\0'){
	i++;
	}

if (i%2 == 0)
	j = i / 2;
	
else
 	j = (i - 1) / 2;

while ( *(str+j) != '\0' ){
		print_char( *(str+j+1));
		j++;
}
}
