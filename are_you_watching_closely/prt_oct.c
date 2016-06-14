int prt_chr(char c);

int prt_oct(unsigned int num) {
	int i;
	int j;
	int temp;
	char octalNumber[100];

	i = 0;

	while(num != 0) {
		temp = num % 8;

		/*To convert integer into character*/
		temp = temp + 48;

		octalNumber[++i] = temp;
		num = num / 8;
	}
	for(j = i ; j > 0 ; j--)
	prt_chr(octalNumber[j]);
	return i;
}
