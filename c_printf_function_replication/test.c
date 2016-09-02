#include <limits.h>
#include <stdio.h>
#include <unistd.h>

int prt_chr(char c)
{
  return (write(1, &c, 1));
}


void print_hex(unsigned long int num){
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
	prt_chr(hexadecimal_string[j]);
}



int main(void)
{
	int len;
	unsigned int ui;
	void *addr;
	int return_count;

	len = printf("INTEGER{%d}, STRING{%s}\n", 98, "I am a string");
	ui = (unsigned int)INT_MAX + 1;
	addr = &len;
	printf("previous length using d{%d}\n", len);
	printf("previous length using i{%i}\n", len);
	printf("UNSIGNED INTEGER{%u}\n", ui);
	printf("INT_MIN{%u}\n", INT_MIN);
	printf("INT_MAX{%u}\n", INT_MAX);
	printf("INT_MIN using u{%u}\n", INT_MIN);
	printf("INT_MIN using d{%d}\n", INT_MIN);
	printf("INT_MAX using u{%u}\n", INT_MAX);
	printf("INT_MAX using d{%d}\n", INT_MAX);
	printf("ADDRESS using p{%p}\n", addr);

	print_hex((unsigned long int)addr);
	return_count = printf("\n");
	printf("I am a char{%c}\n", 'c');
	printf("I am an octal{%o}\n", 610);
	return (return_count);
}
