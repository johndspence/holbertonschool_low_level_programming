#include <stdio.h>
#include <stdlib.h>

int str_len(char *s)
  {
    int i;
    i = 0;

    while (s[i] != '\0' && (((s[i] >= '0') && (s[i] <= '9')) ||
    ((s[i] >= 'a') && (s[i] <= 'z')) ||
    ((s[i] >= 'A') && (s[i] <= 'Z'))))
      {
        i++;
      }
  return (i + 1);
  }

char **string_to_words(char *s)
  {
    int len;
    int i;
    int j;
    char **w;

    i = 0;
    j = 0;
    len = str_len(s);
    w = malloc((len - 2) * sizeof(char));

    printf("string length is %d\n", len);

    while (s[i] != '\0')
      {
        j = 0;

        if (((s[i] >= '0') && (s[i] <= '9')) ||
        ((s[i] >= 'a') && (s[i] <= 'z')) ||
        ((s[i] >= 'A') && (s[i] <= 'Z')))
        {
          w[i][j] = s[i];
        }
        else w[i][j] = ' ';
        j++;
        i++;
      }
      w[i][j] = '\0';
    return w;
  }
