#include <unistd.h>
#include <stdio.h>

int print_char(char c)
{
	return (write(1, &c, 1));
}

int string_to_integer(char *str){
    int i;
		int sum;

		i = 0;
		sum = 0;

    while(str[i]!='\0'){
      if(str[i] < 48 || str[i] > 57){
        return -1;
      }
      else{
        sum = sum*10 + (str[i] - 48);
        i++;
      }
    }
return sum;
}

int main(int argc, char* argv[]) {
	int row;
	int col;
	int len;

	if (argc != 2)
	{
		return -1;
	}

	len = string_to_integer(argv[1]);

	if (len < 1)
	{
		return -1;
	}

	row = 1;
	while (row <= len) {
		col = 1;
		while (col <= len) {
			if ((col == len - row + 1) && (col == row))
			{
				print_char('X');
			}
			else if (col == row)
			{
				print_char('\\');
			}
			else if (col == len - row + 1)
			{
				print_char('/');
			}
			else
			{
			print_char(' ');
			}
			col++;
		}
		print_char('\n');
		row++;
	}
return 0;
}
