#include <limits.h>


int printf(const char *format, ...);

int main(void)
{
	int len;
	unsigned int ui;
	void *addr;
	int return_count;

	len = printf("INTEGER{%d}, STRING{%s}\n", 98, "I am a string");
	ui = (unsigned int)INT_MAX + 1;
	addr = &len;
	printf("previous length{%d}\n", len);
	printf("UNSIGNED INTEGER INT_MAX +1 using u{%u}\n", ui);
	printf("UNSIGNED INTEGER using u{%u}\n", INT_MIN);
	printf("INT_MIN using u{%u}\n", INT_MIN);
	printf("INT_MIN using d{%d}\n", INT_MIN);
	printf("INT_MAX using u{%u}\n", INT_MAX);
	printf("INT_MAX using d{%d}\n", INT_MAX);
	printf("ADDRESS{%p}\n", addr);
	printf("HEXADECIMAL{%X}\n", 33 );
	printf("UNKNOWN SPECIFIER{%Q}\n", len);
	return_count = printf("heris\n", len);
	printf("I am an octal{%o}\n", 610);
	return (return_count);
}
