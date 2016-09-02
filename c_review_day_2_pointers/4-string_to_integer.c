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
int result;

i = 0;
result = 1;

while(s[i] !='\0')
  {
    if(s[i] == '-')
    {
      result = (result *-1);
    }
    if ((s[i] >= '0') && (s[i] <= '9'))
    {
      result = result * (s[i] - '0');
      i++;
      while((s[i] >= '0') && (s[i] <= '9'))
      {
      result = result * 10 + (s[i] - '0');
      i++;
      }
    }
break;
  }
  return (result);
}
