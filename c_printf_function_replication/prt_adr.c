int prt_chr(char c);
int printf(const char *format, ...);

/*
 * Receives long int, converts to hex str, and prt_chr's.
 * Returns length of string printed
 */

int prt_adr(unsigned long int num){
	int i;
	int j;
	int temp;

	char hexadecimal_string[100];
	i = 1;

	while(num != 0) {
		temp = num % 16;

		/*To convert integer into character*/
		if( temp < 10)
			temp = temp + 48;
		else
			temp = temp + 87;

		hexadecimal_string[i++] = temp;
		num = num / 16;
	}
	hexadecimal_string[i++] = 'x';
	hexadecimal_string[i++] = '0';

	for(j = i - 1 ; j > 0 ; j--) {
		prt_chr(hexadecimal_string[j]);
	}
	return i - 1;
}
