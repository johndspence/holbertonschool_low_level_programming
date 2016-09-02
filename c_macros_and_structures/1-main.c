#include "str_struct.h"
#include <stdio.h>

struct String *string_to_struct(char *str);
void print_string_struct(struct String *str);
int main(void)
{

  struct String *str;
  str = string_to_struct("Holberton");
  printf("%s\n", str->str);
  printf("%d\n", str->length);
  return (0);
}
