#include <limits.h>
#include <stdio.h>

int main(void)
{
	int len;
	unsigned int ui;
	void *addr;

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
	printf("ADDRESS using d{%d}\n", addr);
	
	printf("I am a char{%c}\n", 'c');
	printf("I am an octal{%o}\n", 610);
	return (0);
}
