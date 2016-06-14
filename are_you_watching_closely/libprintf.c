#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#define ui unsigned int

int prt_chr(char c);
int prt_hex(unsigned int num);
int prt_adr(unsigned long int num);
int prt_oct(unsigned int num);
int prt_str(char *str);
int prt_num(int n);
int prt_num_u(unsigned int n);

int printf(const char *format, ...) {
	/* Points to each character */
	int ival, i, prt_cnt;
	unsigned int uival;
	unsigned long int ulival;
	char *sval;
	/* Macro to point, via pointer ap, to each unnamed argument in turn */
	va_list ap;
	/* Macro to initialize va_list starting with first unnamed argument */
	va_start(ap, format);
	i = 0;
	prt_cnt = 0;
	while (format[i]!= '\0') {
		if (format[i] != '%') {
			prt_chr(format[i]);
			prt_cnt++;
		}
		if (format[i] == '%') {
			if (format[i+1] == '%') {
				prt_chr('%');
				prt_cnt++;
			} else if ((format[i+1] == 'd')||(format[i+1]=='i')) {
				prt_cnt += prt_num(ival=va_arg(ap, int));
			} else if (format[i+1] == 'u') {
				prt_cnt += prt_num_u(uival=va_arg(ap, ui));
			} else if (format[i+1] == 'o') {
				prt_cnt += prt_oct(uival=va_arg(ap, ui));
			} else if (format[i+1] == 'x'||format[i+1] == 'X') {
				prt_cnt += prt_hex(uival=va_arg(ap, ui));
			} else if (format[i+1] == 's'||format[i+1] == 'c') {
				prt_cnt += prt_str(sval=va_arg(ap, char*));
			} else if (format[i+1] == 'p') {
				prt_cnt += prt_adr(ulival=va_arg(ap,ui long));
			} else {
				prt_chr(format[i]);
				prt_chr(format[i+1]);
				prt_cnt = prt_cnt + 2;
			}
			i++;
		}
		i++;
	}
	va_end(ap);
	return(prt_cnt);
}
