#include <stdio.h>
int print_char(char c);

/*
 * Iterate from z to a, both initializing and printing from character column of
 * ASCII table
 */
void print_tebahpla(void)
{
  char i;
  i = 'z';
  while (i >= 'a')
  {
  print_char(i);
  i --;
  }
}
