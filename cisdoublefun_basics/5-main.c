#include <stdio.h>
char odd(int n);
int print_char(char c);

int main(void)
{
   char c;

   c = odd(1);
   print_char(c);

   c = odd(2);
   print_char(c);

   c = odd(0);
   print_char(c);

   c = odd(13);
   print_char(c);

   print_char('\n');
   return (0);
}
