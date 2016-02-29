#include <stdio.h>

void triangles_in_the_term(int h, int n){
int current_column, mid_column, total_columns, current_row, current_triangle;
mid_column = h;
total_columns = (h * 2) - 1;
/* 1 Triangle loop up to n */
for (current_triangle = 1; current_triangle <= n ; current_triangle++){
  /* 1.1 Row loop up to h */
  for (current_row = 1; current_row <= h; current_row++){
	/* 1.1.1 Column loop up to total_columns */
	for (current_column = 1;current_column<=total_columns; current_column++){
	  /* 1.1.1.1 print blanks spaces */
	  if ((current_column <= (mid_column - current_row))){
		printf(" ");
		}
		/* 1.1.1.2 print *'s */
		else if ((current_column > (mid_column - current_row)) 
			&& (current_column < (mid_column + current_row))){
			printf("*");
			}
		}
	printf("\n");
	}
}}
