#include <stdio.h>

char *d;

/* string_copy copies the string pointed to by src into the */
/* array pointed to by dest and returns the value of dest */

char *string_ncopy(char *dest, const char *src, int n){
 int i, j;
 for(i=0,j=0; j<n && src[j]!= '\0'; i++, j++){
   dest[i] = src[j];
 }
 for(; i <n; i++){
   dest[i]='\0';}
 return dest;
}
