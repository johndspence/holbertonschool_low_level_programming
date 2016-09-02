#include <stdio.h>

int string_to_integer(char *s)
{
int i;
int sign;
int result;

i = 0;
sign = 1;
result = 0;

/* Determine Sign */
while((s[i] !='\0') && (s[i] < '0' || s[i] > '9'))
  {
    if(s[i] == '-')
    {
      sign *= -1;
    }
    i++;
  }

while(s[i] >= '0' && s[i] <= '9')
  {
    printf("%c", s[i]);
    i++;
  }
printf("\n");
return 1;
}
