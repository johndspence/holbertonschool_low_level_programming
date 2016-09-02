#include <stdlib.h>

int len1;
int len2;
int i = 0;
int j = 0;
char *newconcat;

char *string_nconcat(char *s1, char *s2, int n){
  /* Count length of parameter strings */
  while (s1[i] != '\0'){
    i = i + 1;
    len1 = len1 + 1;
  }

  len2 = (n - 1);

  /* Allocate space in newconcat for two strings plus null terminator */
  newconcat = (char *)malloc((len1+len2+1)*sizeof(char));

  if (newconcat == NULL){
    return NULL;
  }

  /* Populate newconcat with parameter strings */
  for(i = 0; s1[i] != '\0' ; i = i + 1){
    newconcat[i] = s1[i];
    }

  for(j = 0; j <= len2 ; j = j + 1, i = i + 1){
    newconcat[i] = s2[j];
    }

  /* Add null terminator */
  newconcat[i] = '\0';
  return(newconcat);
}
