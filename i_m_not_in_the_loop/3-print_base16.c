#include "my_functions.h"
/*Include my_functions.h for print_char prototype*/

void print_base16(void)
/*Declare print_base16 function*/

{
  char print_base16; 
  /*Declaring print_base16 variable in char*/
  for (print_base16='0'; print_base16<='9'; ++print_base16)
    /*0-9 base 16 loop*/
    print_char(print_base16);
    /*Execute print_char function with print_base16 variable*/
    for (print_base16='A'; print_base16<='F'; ++print_base16)
    /*A-F base 16 loop*/
    print_char(print_base16);
  /*Execute print_char function with print_base16 variable*/
}
