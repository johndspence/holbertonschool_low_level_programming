#include <stdio.h>
int print_char(char c);

/*
 * Three if statements; one each for positive, negative, and zero n,
 * with corresponding P, N, and Z
 */
void positive_or_not(int n)
{
  if (n > 0)
    {
    print_char('P');
    }
  if (n < 0)
    {
    print_char('N');
    }
  if (n == 0)
    {
    print_char('Z');
    }
}
