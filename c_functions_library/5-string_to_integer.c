#include <stdio.h>

int string_to_integer(char *s){
    int i=0,sum=0;
    
    while(s[i]!='\0'){
      if(s[i] < 48 || s[i] > 57){
        printf("Unable to convert it into integer.\n");
        return 0;
      }
      else{
        sum = sum*10 + (s[i] - 48);
        i++;
      }
    }
return sum;
}
