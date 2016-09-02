#include <stdlib.h>

int len1;
int len2;
int i = 0;
int j = 0;
char *newconcat;

char *string_concat(char *s1, char *s2){
  /* Count length of parameter strings */
  while (s1[i] != '\0'){
    i = i + 1;
    len1 = len1 + 1;
  }

  while (s2[i] != '\0'){
    len2 = len2 + 1;
    i = i + 1;
    }
  /* Allocate space in newconcat for two strings plus null terminator */
  newconcat = (char *)malloc((len1+len2+1)*sizeof(char));

  if (newconcat == NULL){
    return NULL;
  }

  /* Populate newconcat with parameter strings */
  for(i = 0; s1[i] != '\0' ; i = i + 1){
    newconcat[i] = s1[i];
    }

  for(j = 0; s2[j] != '\0' ; j = j + 1, i = i + 1){
    newconcat[i] = s2[j];
    }

  /* Add null terminator */
  newconcat[i] = '\0';
  return(newconcat);
}
