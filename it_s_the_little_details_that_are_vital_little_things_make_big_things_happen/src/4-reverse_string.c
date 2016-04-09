#include "holbertonschool.h"
void reverse_string(char *s);

/* Puts s[i] into temp variable, swaps s[i] with s[j]
and then puts temp into s[j] */
void reverse_string(char *s){

int i;
int j = 0;
int temporary;

for (i=0; *(s+i) != '\0'; i++){}
	i=i-1;

while (j < i){
	temporary = s[i];
	s[i] = s[j];
	s[j] = temporary;
	i--;
	j++;
	}
}
