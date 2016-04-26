#include <stdio.h>
int print_char(char c);
/*
 * Iterate from a to z, both initializing and printing from character column of
 * ASCII table
 */
void print_alphabet(void)
{
  char i;
  i = 'a';
  while (i <= 'z')
  {
  print_char(i);
  i ++;
  }
}
