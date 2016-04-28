#include <stdio.h>
/*
 * Comments!
 */

/*
 * Function to produce error if number is less than minimum integer
 * or maximum integer
 */

 /*
  * Function to produce error if there is no number in the string
  */

int string_to_integer(char *s)
{
int i;
int j;
char substring[256];

i = 0;
j = 0;

while (s[i] !='\0')
  {
    while ((s[i] >= '0') && (s[i] <= '9'))
      {
        substring[j] = s[i];
        i++;
        j++;
        printf("i = %d s[i] = %c\n", i, s[i]);
      }
      printf("%s\n", substring);
  }
return (1);
}
