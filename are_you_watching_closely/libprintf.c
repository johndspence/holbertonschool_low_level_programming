#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>

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
	int i;
	char *sval;

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
				print_char('%');
				i++;
			}
			else if ((format[i+1] == 'd') || (format[i+1] == 'i')) {
				ival = va_arg(ap, int);
				print_number(ival);
				i++;
			}
			else if (format[i+1] == 'u') {
				ival = va_arg(ap, int);
				print_char(format[i+1]);
				i++;
			}
			else if (format[i+1] == 'o') {
				ival = va_arg(ap, int);
				print_char(format[i+1]);
				i++;
			}
			else if ((format[i+1] == 'x') || (format[i+1] == 'X')) {
				ival = va_arg(ap, int);
				print_char(format[i+1]);
				i++;
			}
			else if (format[i+1] == 's') {
				sval = va_arg(ap, char *);
				print_string(sval);
				i++;
			}
			else if (format[i+1] == 'p') {
				ival = va_arg(ap, int);
				print_char(format[i+1]);
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
	(void) ival;
	va_end(ap);
	return(4);
}
/*
Iterate through unnamed arguments
if *p = %, then interpret next character
do a different thing based on this character
putchar characters
*/
