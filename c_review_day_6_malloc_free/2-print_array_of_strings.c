#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

/* print_char function */
int print_char(char c)
  {
    return (write(1, &c, 1));
  }

/* print_array_of_strings function */
void print_array_of_strings(char **a)
{
  int i;
  int j;
  i = 0;
  j = 0;

/* While array[i][j] does not hold NULL, print each character */
while (a[i] != NULL)
  {
    j = 0;

    while (a[i][j] != '\0')
    {
      print_char(a[i][j]);
      j++;
    }

    if (a[i + 1] == NULL)
      {
        print_char('\n');
      }
      else print_char(' ');

    i++;
  }
}
