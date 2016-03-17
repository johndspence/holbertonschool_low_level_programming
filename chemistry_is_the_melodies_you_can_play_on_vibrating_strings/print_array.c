/* prints a string using pointer of array plus 1 */
int print_char(char c);

void print_array(int *a, int n){
long int ncopy, ncopy2, power;
int printnum, i;
if (n <= 0){
	print_char ('\n');
	}
	else{
		for (i = 0; i < n; i++){
		power=1;
		ncopy = *(a+i);

			if (ncopy == 0){
    		print_char ('0');
    		}

			if (ncopy < 0){
    		ncopy = ncopy*-1;
    		print_char ('-');
    		}

			ncopy2 = ncopy;

			while (ncopy2 > 9){
    			ncopy2 = ncopy2/10;
    			power = power * 10;}

 						while (ncopy > 0){
				printnum = ncopy / power;
				ncopy = ncopy % power;
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
