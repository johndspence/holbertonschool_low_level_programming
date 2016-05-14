#include <stdio.h>

int str_comp(char *, char *);

void main(void)
{
char str1[] = {"Holberton"};
char str2[] = {"Holberton"};
int i;

i = str_comp(str1, str2);
if (i == 0)
  printf("They are equal\n");
if (i == 1)
  printf("They are not equal\n");

}
