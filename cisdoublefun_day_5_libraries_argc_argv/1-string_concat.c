#include <stdio.h>

/* String Length Checker */
int stringlength(const char *destorsrc)
{
  int length;
  length = 0;
  while (destorsrc[length] != '\0')
    {
      length++;
    }
  return length;
}

/* Concat function */
char *string_concat(char *dest, const char *src)
{
  int lengthdestarray;
  int lengthdeststring;
  int lengthsrcstring;
  int positioninsrc;

  lengthdestarray = sizeof(dest) / sizeof(char) * 4;
  lengthsrcstring = stringlength(src);
  lengthdeststring = stringlength(dest);
  positioninsrc = 0;

  if ((lengthdeststring + lengthsrcstring) > lengthdestarray)
    return("There is no room at the inn");

  while (src[positioninsrc] != '\0')
    {
      dest[lengthdeststring] = src[positioninsrc];
      lengthdeststring++;
      positioninsrc++;
    }
    dest[lengthdeststring + 1] = '\0';
  return (dest);
}
