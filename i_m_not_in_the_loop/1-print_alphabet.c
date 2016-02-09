#include "my_functions.h"
/*Include my_functions.h for print_char prototype*/

void print_alphabet (void)
/*Declare print_alphabet function*/

{
  char alphabet; //Declaring alphabet variable in char
  for (alphabet='a' ; alphabet<='z'; ++alphabet)
    //a to z loop
    print_char(alphabet);
  /*Execute print_char function with alphabet variable*/
}
  
