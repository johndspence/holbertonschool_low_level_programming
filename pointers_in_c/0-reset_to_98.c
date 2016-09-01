#include <stdio.h>

void reset_to_98(int *n){
/* Takes value n from 0-main.c and sets it to 98. Since n 
  is a pointer, when we set *n to 98, we are dereferencing
  n and so setting the value n points to to 98 */	
*n = 98;
}


