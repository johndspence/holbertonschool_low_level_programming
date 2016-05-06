#include "str_struct.h"
#include "0-print_number.c"

void print_number(int n);
void print_char(char c);

/* print each character of dereferenced *str str string */
void print_string_struct(struct String *str)
{
  int i;

  i = 0;
  while ((*str).str[i] != '\0')
    {
      print_char((*str).str[i]);
      i++;
    }
  print_char(',');
  print_char(' ');
  print_number(i);
  print_char('\n');
}
