#include "my_functions.h"
/*Include my_functions.h for print_char prototype*/

void print_tebahpla (void)
/*Declare print_tebahpla function*/

{
  char tebahpla; //Declaring tebahpla variable in char
  for (tebahpla='z' ; tebahpla>='a'; tebahpla--)
    //z to a loop
    print_char(tebahpla);
  /*Execute print_char function with tebahpla variable*/
}
