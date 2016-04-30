#include <stdio.h>

void print_char(char c)
{
  write(1, &c, 1);
}

void print_string(char *s)
{
  print_char(*s);
  if (*s != '\0')
  {
    print_string(s + 1);
  }
}

int main(void)
{
  char *s;
  s = "I wanna be sedated";
  print_string(s);
  print_char('\n');
  return 0;
}
