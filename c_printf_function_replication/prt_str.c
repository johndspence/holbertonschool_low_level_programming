int prt_chr(char c);

int prt_str(char *str) {
	int i = 0;
	while ( *(str+i) != '\0' ) {
		prt_chr( *(str+i));
		i++;
	}
	return i;
}
