#include <unistd.h>
/**
 * print_char - prints one character
 *
 * @c: char passed as argument
 *
 * Description:  prints one character passed as argument using stdio.h write
 * function
 */
int print_char(char c)
{
	return (write(1, &c, 1));
}
