#include <stdio.h>
int print_char(char c);
int row;
int column;

/* Outside loop for row, from 1 to n     */
/* Inside loop for column, from 1 to row */
/* Print blanks space until column = row, then print newline */
/* n = zero and negative are handled separately */
void print_diagonal(int n){
  if (n <= 0){print_char('\n');
  };
  for (row = 1; row <= n; row++){
    for (column = 1 ; column < row; column++) {
      print_char(' '+ 0);
    }
    print_char('\\');
    print_char('\n');
  }
}
