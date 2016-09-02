int prt_chr(char c);

/*
 * Receives unsigned int and prt_chr's.
 * Returns length of string printed
 */

int prt_num_u(unsigned int n) {
	int ncopy;
	int printnum;
	int power;
	int return_val;

	return_val = 0;
	power = 1;

	ncopy = n;

	while (ncopy > 9 || ncopy < -9) {
		ncopy = ncopy / 10;
		power = power * 10;
	}
		ncopy = n;

	while (ncopy != 0) {
		printnum = ncopy / power;
		ncopy = ncopy % power;
		power = power / 10;
		if (printnum < 0) {
			printnum = printnum * -1;
		}
		prt_chr(printnum + '0');
		return_val++;
	}

	if (n == 0) {
		prt_chr ('0');
		return_val++;
	}
	return return_val;
}
