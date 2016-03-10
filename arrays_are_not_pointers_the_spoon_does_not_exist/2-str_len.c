#include <stdio.h>

/* print string using dereferenced pointer on str array */
int str_len(char *str){

	int i = 0;

	while (*(str+i) != '\0'){
	i++;
	}
 return (i);
}

