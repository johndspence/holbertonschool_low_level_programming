void print_last_digit(int n){
int print_char(char c);
int divisor = 1;
int printnum;
int ncopy = n;

if (n == 0){
print_char('0');
}
else if (n < 0){
n = n*-1;
ncopy = n;
while (ncopy > 10){
ncopy = ncopy/10;
divisor = divisor*10;}
printnum = n%divisor;
print_char(printnum + '0');}
else if (n > 0){
while (ncopy > 10){
ncopy = ncopy/10;
divisor = divisor*10;}
printnum = n%divisor;
print_char(printnum + '0');
}}
