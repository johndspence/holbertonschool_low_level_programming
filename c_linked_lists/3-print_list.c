#include "list.h"
int print_char(char c);

void print_list(List *list)
{
  List *currentnode;
  int j;

  currentnode = list;

  while (currentnode != NULL)
    {
      j = 0;
      while(currentnode->str[j] != 0)
        {
          print_char(currentnode->str[j]);
          j++;
        }
      if (currentnode->next != NULL)
        {
          print_char(',');
          print_char(' ');
        }
      currentnode = currentnode->next;
    }
print_char('\n');
}
