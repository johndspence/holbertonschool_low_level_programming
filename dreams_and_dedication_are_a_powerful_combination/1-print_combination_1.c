#include "my_functions.h"

void print_combination_1(void){

int i;
int n = 9;

for(i = 0; i < n; i++){
print_char(i + '0');
print_char(',');
print_char(' ');
}

if(i == n){
print_char(i + '0');
}

}
/*  Function is an iterative loop from 0 to 9 */