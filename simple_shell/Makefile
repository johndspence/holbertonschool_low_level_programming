CC=gcc
CFLAGS= -Wall -Werror -Wextra -pedantic
INCLUDE=
OBJECTS=
SOURCES=\
main.c \
cmd_ln_rdr.c \
cmd_prmpt_prntr.c \
libshell.a \
blt_in_func_idx.c \
path_func_idx.c \
print_char.c \
print_env.c \
str_comp.c

TARGET=a.out

all: a.out

a.out : $(SOURCES)
	$(CC) $(CFLAGS) $(SOURCES) -o $(TARGET)

.PHONY: clean

clean :
	rm $(OBJECTS) $(TARGET)

re :
	$(CC) $(CFLAGS) $(SOURCES) -o $(TARGET)
