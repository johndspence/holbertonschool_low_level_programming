#include <stdio.h>

/* print string using dereferenced pointer on str array */
int str_len(char *s){

	int i = 0;

	while (*(s+i) != '\0'){
	i++;
	}
 return (i);
}
