#include <stdio.h>
int i=0;
char *uppercase_string(char *s){
  for(i=0; (s[i] !='\0'); i++){
     if(s[i]>=97 && s[i]<=122)
      s[i]=s[i]-32;
 }
return(s);
}
