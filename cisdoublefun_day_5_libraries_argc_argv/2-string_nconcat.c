#include <stdio.h>

/* String Length Checker */
int stringlength(const char *destorsrc)
{
  int length;
  length = 0;
  while (destorsrc[length] != '\0')
    {
      ++length;
    }
  return length;
}

/* Concat function */
char *string_nconcat(char *dest, const char *src, int n)
{
  int lengthdestarray;
  int lengthdeststring;
  int positioninsrc;

  lengthdestarray = sizeof(dest) / sizeof(char) * 4;
  lengthdeststring = stringlength(dest);
  positioninsrc = 0;

  if ((lengthdeststring + n + 1) > lengthdestarray)
    return("There is no room at the inn");

  while (positioninsrc < n)
    {
      dest[lengthdeststring] = src[positioninsrc];
      lengthdeststring++;
      positioninsrc++;
    }
    dest[lengthdeststring] = '\0';
  return (dest);
}
