#include <stdio.h>
#include "my_functions.h"

void print_combination_4(void){

int i;
int j;
int k;
int l;

for (i=0; i<=9; i++){
	for(j=0; j<=9; j++){
		for (k=0; k>=i && k<=9; k++){
			for(l=0; l>=j && l<=9; l++){
			print_number (i);
			print_number (j);
			print_char (' ');
			print_number (k);
			print_number (l);
			print_char (',');
			print_char (' ');
			/* if (i < 8) {print_number (i);}; */
			}
		}			
	}
}
}