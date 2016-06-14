typedef struct conv_func {
	char conv;
	int (*func)(va_list ap);
} conv_func;

/* Function chooser struct */
int manage_funcs(char c, va_list ap) {
	int i;
	int return;

	conv_func f[] = { {'d', &prt_num}, {'i', &prt_num}, {'o', &prt_oct}, \
	{'u', &prt_num_u}, {'x', &prt_hex}, {'X', &prt_hex}, {'c', &prt_str},\
	 {'s', &prt_str}, {'p', &prt_adr}, {'%', &prt_perc}, {'\0', '\0'} };

	i = 0;
	while (conv_func[i].conv != '\0') {
		if (c == conv_func[i].conv) {
			return = conv_func[i].func(ap);
			return (return);
	}
	i++;
	}
	return (0);
}
