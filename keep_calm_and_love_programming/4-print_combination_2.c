#include <stdio.h>

void print_combination_2(void){

int i;
int j;

for (i=0; i<=9;i++){
	for(j=i+1; j<=9; j++){
		printf ("%d", i);
		printf ("%d", j);
		if (i < 8) {printf ("%s", ", ");};
	}
}
}