#include <stdio.h>

/*
 * While str[i} is not equal to 0, increase i as a counter
 * of length.  Return length of i
 */
int str_len(char *s)
{
  int i;
  i = 0;
  while (s[++i])
    ;
  return i;
}

/*
 * Reversing string function.  Returns pointer to reversed string.
 * Increments i through len, placing the i-th character in a temp
 * variable and swapping the i-th with the len-th character, and finally
 * replacing the len-th character with temp
 */
char *rev_string(char *str)
{
  int i;
  int len;
  char temp;

  i = 0;
  len = str_len(str) - 1;
  while (i <= len)
    {
      temp = str[i];
      str[i] = str[len];
      str[len] = temp;
      i++;
      len--;
    }
  return(str);
}
