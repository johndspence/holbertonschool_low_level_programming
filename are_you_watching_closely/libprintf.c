#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

void print_hex(int num);

int print_char(char c)
{
  return (write(1, &c, 1));
}

void print_string(char *str){
	int i = 0;
	while ( *(str+i) != '\0' ) {
		print_char( *(str+i));
		i++;
	}
}

void print_hex(int num){
	int i;
	int j;
	int temp;
	char hexadecimal_string[100];
	i = 1;

	while(num != 0){
		temp = num % 16;

		/*To convert integer into character*/
		if( temp < 10)
			temp = temp + 48;
		else
			temp = temp + 55;

		hexadecimal_string[i++] = temp;
		num = num / 16;
		}
	for(j = i - 1 ; j > 0 ; j--)
	print_char(hexadecimal_string[j]);
}

void binary_hex(long int binary_number) {
	int j;
	long int remainder;
	char str[100];
	int i;
	int n;
	int rem;
	int num;
	int len;
	long int hexadecimal_number;

	len = 0;
	hexadecimal_number = 0;
	j = 1;

	while(binary_number != 0){
		remainder = binary_number % 10;
		hexadecimal_number = hexadecimal_number + remainder * j;
		j = j * 2;
		binary_number = binary_number/10;
	}

	while (hexadecimal_number != 0)
	{
		len++;
		n /= 10;

	}
	for (i = 0; i < len; i++)
	{
		rem = num % 10;
		num = num / 10;
		str[len - (i + 1)] = rem + '0';
	}
	str[len] = '\0';
	print_string(str);
	}


void print_oct(int num){
	int i;
	int j;
	int temp;
	char octalNumber[100];

	i = 1;

	while(num != 0){
		temp = num % 8;

		/*To convert integer into character*/
		temp = temp + 48;

		octalNumber[i++] = temp;
		num = num / 8;
		}
	for(j = i - 1 ; j > 0 ; j--)
	print_char(octalNumber[j]);
}

void print_number(int n){
	int ncopy;
	int printnum;
	int power;

	power=10;

	if (n < 0){
		n = n*-1;
		print_char ('-');
	}
	ncopy = n;

	while (ncopy > 9){
		ncopy = ncopy/10;
		power = power * 10;}
		power = power / 10;
		ncopy = n;

	while (ncopy > 0){
		printnum = ncopy / power;
		ncopy = ncopy % power;
		power = power / 10;
		print_char(printnum + '0'); }

	if (n == 0){
		print_char ('0');}
}



int printf(const char *format, ...) {
	/* Points to each character */
	int ival;
	long int lval;
	int i;
	char *sval;
	/*char c; */

	/* Macro to point, via pointer ap, to each unnamed argument in turn */
	va_list ap;

	/* Macro to initialize va_list starting with first unnamed argument */
	va_start(ap, format);

	i = 0;
	while (format[i]!= '\0') {
		if (format[i] != '%') {
			print_char(format[i]);
		}
		if (format[i] == '%') {
			if (format[i+1] == '%') {
				print_char('%');
				i++;
			}
			else if ((format[i+1] == 'd') || (format[i+1] == 'i')) {
				ival = va_arg(ap, int);
				print_number(ival);
				i++;
			}
			else if (format[i+1] == 'u') {
				lval = va_arg(ap, int);
				print_number(lval);
				i++;
			}
			else if (format[i+1] == 'o') {
				ival = va_arg(ap, int);
				print_oct(ival);
				i++;
			}
			else if ((format[i+1] == 'x') || (format[i+1] == 'X')) {
				ival = va_arg(ap, int);
				print_hex(ival);
				i++;
			}
			else if (format[i+1] == 's' || format[i+1] == 'c') {
				sval = va_arg(ap, char *);
				print_string(sval);
				i++;
			}
			else if (format[i+1] == 'p') {
				lval = va_arg(ap, int);
				binary_hex(lval);
				i++;
			}
			else {
				print_char(format[i]);
				print_char(format[i+1]);
				i++;
			}
		}
		i++;
	}

	va_end(ap);
	return(4);
}
/*
Iterate through unnamed arguments
if *p = %, then interpret next character
do a different thing based on this character
putchar characters
*/
