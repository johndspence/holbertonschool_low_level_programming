#include <stdio.h>

int print_char(char c);

/*
 * Iterate from 0 to 16 over string myarray
 */
void print_base16(void)
{
  int i;
  char *myarray;

  i = 0;
  myarray = "0123456789ABCDEF";
  while (i <= 16)
  {
    print_char(myarray[i]);
    i ++;
  }
}
