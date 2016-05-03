#include <stdlib.h>
#include <stdio.h>

int str_ofstrings_length(int ac, char **av)
{
  int argumentcounter;
  int charactercounter;
  int spaceneededforallstrings;

  argumentcounter = 0;
  spaceneededforallstrings = 0;

  while (argumentcounter < ac)
    {
      charactercounter = 0;

      while (av[argumentcounter][charactercounter] != '\0')
        {
        spaceneededforallstrings++;
        charactercounter++;
        }

      spaceneededforallstrings++;
      argumentcounter++;
    }
return spaceneededforallstrings;
}

char *all_in_one_args(int ac, char **av)
{
  char *s;
  int len;
  int argumentcounter;
  int charactercounter;
  int i;

  argumentcounter = 0;
  i = 0;

  /* Determine space needed */
  len = str_ofstrings_length(ac, av);

  /* malloc space needed */
  s = malloc((len + 1) * sizeof(char));
  if (s == NULL)
  {
    return NULL;
  }

/* Iterate i, argument counter, and character counter
 * to populate s with characters from *av
 */
while (argumentcounter < ac)
  {
    charactercounter = 0;

    while (av[argumentcounter][charactercounter] != '\0')
      {
      s[i] = av[argumentcounter][charactercounter];
      i++;
      charactercounter++;
      }

    s[i] = '\n';
    i++;
    argumentcounter++;
  }
s[i] = '\0';
return (s);
}
