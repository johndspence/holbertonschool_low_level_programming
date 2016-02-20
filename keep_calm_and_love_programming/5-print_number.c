#include <stdio.h>
#include "my_functions.h"

void print_number(int n){
  int ncopy;
  int power=1;
  int printnum; 
if (n < 0){
    n = n*-1;
    print_char ('-');                
    }
ncopy = n;
while (ncopy > 9){
    ncopy = ncopy/10;
    power = power * 10;}
ncopy = n;
while (ncopy > 0){
printnum = ncopy / power;
ncopy=ncopy % power;
power = power / 10;
print_char(printnum + '0'); }
if (n == 0){
print_char ('0');}
}
