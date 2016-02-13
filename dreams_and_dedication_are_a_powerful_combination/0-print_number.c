#include "my_functions.h"

void print_number(int n){
  int ncopy;
  int ncopy2;
  int parsingdivisor;

   
  if (n == 0)
    {
        print_char(n + 48);
    }


    else if (n < 0)
    {
    
    print_char ('-');                
    
    for (ncopy = n*-1, parsingdivisor = 1 ; ncopy < 10 ; ncopy = ncopy / 10, parsingdivisor = parsingdivisor * 10)
    {
    }

    for (ncopy2 = n*-1 ; parsingdivisor >= 10 ; ncopy2 = ncopy2 - (ncopy2 / parsingdivisor) , parsingdivisor = parsingdivisor / 10 )
    {
    print_char((ncopy2 / parsingdivisor) + 48);
    }
    
    }



    else 
    {
    for (ncopy = n, parsingdivisor = 1 ; ncopy < 10 ; ncopy = ncopy / 10, parsingdivisor = parsingdivisor * 10)
    {
    }

    for (ncopy2 = n ;parsingdivisor >= 10 ; ncopy2 = ncopy2 - (ncopy2 / parsingdivisor) , parsingdivisor = parsingdivisor / 10 )
    {
    print_char((ncopy2 / parsingdivisor) + 48);
    }
    
    }
  }

