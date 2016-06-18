#include <unistd.h>

int print_char(char c)
{
	return (write(1, &c, 1));
}

int main (void){
	int row;
	int col;
	int len;

	row = 0;
	col = 1;
	len = 10;

	print_char('a');
	print_char('\n');

	while (row < len) {
		while (col < len) {
			if (col == row)
			{
				print_char('b');
			}
			col++;
		}
	row++;
	}
return 0;
}
