#include <stdio.h>

void doit( int x ){ 
             x = 402; 
             printf ("%d\n", x);
           } 
 
    
int main() { 
  int z = 98; 
  doit(z); 
  printf("z is now %d\n", z); 
  return 0; 
}
