#include "my_functions.h"
/* prints a string using pointer of array plus 1 */
void print_array(int *a, int n){
int ncopy, ncopy2, printnum, power;
for (int i = 0; i < n; i++){
	power=10;
	ncopy = *(a+i);
	if (ncopy <= 0){
		print_char ('\n');}
	else{	
		ncopy2 = ncopy;
		while (ncopy2 > 9){
    		ncopy2 = ncopy2/10;
    		power = power * 10;}
 		power = power / 10;
		while (ncopy > 0){
			printnum = ncopy / power;
			ncopy=ncopy % power;
			power = power / 10;
			print_char(printnum + '0'); 
			}
		if (i < n - 1){
			print_char (44);
			print_char (32);
		}
		else {
			print_char ('\n');
		}
	}
}
}
