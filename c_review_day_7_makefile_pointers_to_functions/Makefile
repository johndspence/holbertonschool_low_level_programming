all: holbertonschool.a

CC=gcc

CFLAGS= -Wall -Werror -Wextra -pedantic -c

INCLUDE=./inc/holbertonschool.h

OBJECTS=print_char.o \
4-positive_or_not.o \
0-print_number.o \
0-absolute.o \
1-uppercase.o \
0-lowercase.o \
0-first_digit.o \
1-swap_int.o \
2-str_len.o \
3-print_string.o \
4-reverse_string.o \
5-string_to_integer.o \
2-print_array.o \
0-concat_strings.o \
1-nconcat_strings.o \
2-string_copy.o \
3-string_ncopy.o \
4-strings_compare.o \
5-reverse_array.o \
0-uppercase_string.o \
1-cap_string.o \
1-power.o \
2-square_root.o \
3-is_prime_number.o

SOURCES=./src/print_char.c \
./src/4-positive_or_not.c \
./src/0-print_number.c \
./src/0-absolute.c \
./src/1-uppercase.c \
./src/0-lowercase.c \
./src/0-first_digit.c \
./src/1-swap_int.c \
./src/2-str_len.c \
./src/3-print_string.c \
./src/4-reverse_string.c \
./src/5-string_to_integer.c \
./src/2-print_array.c \
./src/0-concat_strings.c \
./src/1-nconcat_strings.c \
./src/2-string_copy.c \
./src/3-string_ncopy.c \
./src/4-strings_compare.c \
./src/5-reverse_array.c \
./src/0-uppercase_string.c \
./src/1-cap_string.c \
./src/1-power.c \
./src/2-square_root.c \
./src/3-is_prime_number.c

all : $(OBJECTS)
	ar rc holbertonschool.a $(OBJECTS)

$(OBJECTS) : $(SOURCES)
	$(CC) $(CFLAGS) $(SOURCES)

.PHONY: clean

clean :
	rm $(OBJECTS)

re :
	ar rc holbertonschool.a $(OBJECTS)
