#include <stdio.h>
int print_char(char c);

/* Iterate up */
void iterateup (int n)
{
  int row;
  int col;

  row = 1;
  print_char('\n');
  while (row <= (n - 1))
  {
    col = 1;
    while (col <= row)
      {
        print_char('*');
        ++col;
      }
      print_char('\n');
  ++row;
  }
}

/* Print the long line */
void printlongline (int n)
{
  int col;
  col = n;
  while (col > 0)
  {
  print_char('*');
  --col;
  }
  print_char('\n');
}

/* Iterate down */
void iteratedown (int n)
{
  int row;
  int col;

  row = n - 1;
  while (row >= 0)
  {
    col = 1;
    while (col <= row)
      {
        print_char('*');
        ++col;
      }
      print_char('\n');
  --row;
  }
}

/* Triangle function */
void print_triangle(int n)
{
/* Iterate up */
iterateup(n);

/* Print the long line */
printlongline(n);

/* Iterate down */
iteratedown(n);
}
