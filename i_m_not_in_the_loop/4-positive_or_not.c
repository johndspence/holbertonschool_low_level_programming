#include "my_functions.h"
/*Include my_functions.h for positive_or_not prototype*/

void positive_or_not(int n)
/*Declare positive_or_not function*/
{
  if ( n > 0 )print_char('P');
  if ( n == 0 )print_char('Z');
  if ( n < 0 )print_char('N');
}


  
