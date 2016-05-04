#include <limits.h>

int first_digit(int n){
int ncopy=n, divisor=1, printnum;

if (n == 0){
	return (0);
}
else if (n==INT_MIN){
	return (2);
}
else {
if(n < 0){
n = n*-1;
ncopy = n*-1;}

for (ncopy=n;ncopy>0;ncopy=ncopy/10,divisor = divisor*10)
	printnum=n/divisor;
return (printnum);
}
return(0);
}
