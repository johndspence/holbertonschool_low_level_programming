INCLUDE = ./inc
CC = gcc -c
CFLAGS = -Wall -pedantic -Werror -Wextra -I$(INCLUDE)
DIR = src

all: libholbertonschool.a


libholbertonschool.a: 0-absolute.c 0-uppercase_string.c	1-uppercase.c	3-is_prime_number.c	4-strings_compare.c 0-contact_strings.c	1-cap_string.c 2-print_array.c 3-print_string.c	5-reverse_array.c 0-first_digit.c	1-nconcat_strings.c	2-square_root.c	3-string_ncopy.c	5-string_to_integer.c 0-lowercase.c 1-power.c	2-str_len.c	4-positive_or_not.c	0-print_number.c 1-swap_int.c 2-string_copy.c	4-reverse_string.c	print_char.c
	ar -rcs libholbertonschool.a 0-absolute.c 0-uppercase_string.c	1-uppercase.c	3-is_prime_number.c	4-strings_compare.c 0-contact_strings.c	1-cap_string.c 2-print_array.c 3-print_string.c	5-reverse_array.c 0-first_digit.c	1-nconcat_strings.c	2-square_root.c	3-string_ncopy.c	5-string_to_integer.c 0-lowercase.c 1-power.c	2-str_len.c	4-positive_or_not.c	0-print_number.c 1-swap_int.c 2-string_copy.c	4-reverse_string.c	print_char.c
	ranlib libholbertonschool.a

0-absolute.o: $(DIR)/0-absolute.c
	$(CC) $(CFLAGS) $(DIR)/0-absolute.c

0-contact_strings.o: $(DIR)/0-contact_strings.c
	$(CC) $(CFLAGS) $(DIR)/0-contact_strings.c

0-first_digit.o: $(DIR)/0-first_digit.c
	$(CC) $(CFLAGS) $(DIR)/0-first_digit.c

0-lowercase.o: $(DIR)/0-lowercase.c
	$(CC) $(CFLAGS) $(DIR)/0-lowercase.c

0-print_number.o: $(DIR)/0-print_number.c
	$(CC) $(CFLAGS) $(DIR)/0-print_number.c

0-uppercase_string.o: $(DIR)/0-uppercase_string.c
	$(CC) $(CFLAGS) $(DIR)/0-uppercase_string.c

1-cap_string.o: $(DIR)/1-cap_string.c
	$(CC) $(CFLAGS) $(DIR)/1-cap_string.c

1-nconcat_strings.o: $(DIR)/1-nconcat_strings.c
	$(CC) $(CFLAGS) $(DIR)/1-nconcat_strings.c

1-power.o: $(DIR)/1-power.c
	$(CC) $(CFLAGS) $(DIR)/1-power.c

1-swap_int.o: $(DIR)/1-swap_int.c
	$(CC) $(CFLAGS) $(DIR)/1-swap_int.c

1-uppercase.o: $(DIR)/1-uppercase.c
	$(CC) $(CFLAGS) $(DIR)/1-uppercase.c

2-print_array.o: $(DIR)/2-print_array.c
	$(CC) $(CFLAGS) $(DIR)/2-print_array.c

2-square_root.o: $(DIR)/2-square_root.c
	$(CC) $(CFLAGS) $(DIR)/2-square_root.c

2-str_len.o: $(DIR)/2-str_len.c
	$(CC) $(CFLAGS) $(DIR)/2-str_len.c

2-string_copy.o: $(DIR)/2-string_copy.c
	$(CC) $(CFLAGS) $(DIR)/2-string_copy.c

3-is_prime_number.o: $(DIR)/3-is_prime_number.c
	$(CC) $(CFLAGS) $(DIR)/3-is_prime_number.c

3-print_string.o: $(DIR)/3-print_string.c
	$(CC) $(CFLAGS) $(DIR)/3-print_string.c

3-string_ncopy.o: $(DIR)/3-string_ncopy.c
	$(CC) $(CFLAGS) $(DIR)/3-string_ncopy.c

4-positive_or_not.o: $(DIR)/4-positive_or_not.c
	$(CC) $(CFLAGS) $(DIR)/4-positive_or_not.c

4-reverse_string.o: $(DIR)/4-reverse_string.c
	$(CC) $(CFLAGS) $(DIR)/4-reverse_string.c

4-strings_compare.o: $(DIR)/4-strings_compare.c
	$(CC) $(CFLAGS) $(DIR)/4-strings_compare.c

5-reverse_array.o: $(DIR)/5-reverse_array.c
	$(CC) $(CFLAGS) $(DIR)/5-reverse_array.c

5-string_to_integer.o: $(DIR)/5-string_to_integer.c
	$(CC) $(CFLAGS) $(DIR)/5-string_to_integer.c

print_char.o: $(DIR)/print_char.c
	$(CC) $(CFLAGS) $(DIR)/print_char.c




clean:
	rm -rf $(OUTPUTS) libholbertonschool.a

re: $(OUTPUTS)
