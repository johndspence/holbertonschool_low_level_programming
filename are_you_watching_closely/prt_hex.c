int prt_chr(char c);
int printf(const char *format, ...);

/*
 * Receives unsigned int, converts to hex str, and prt_chr's.
 * Returns length of string printed
 */

int prt_hex(unsigned int num){
	int i;
	int j;
	int temp;
	char hexadecimal_string[100];
	i = 0;

	while(num != 0) {
		temp = num % 16;

		/*To convert integer into character*/
		if( temp < 10)
			temp = temp + 48;
		else
			temp = temp + 55;

		hexadecimal_string[++i] = temp;
		num = num / 16;
	}
	for(j = i ; j > 0 ; j--)
		prt_chr(hexadecimal_string[j]);
	return i;
}
