CC=gcc
CFLAGS= -Wall -Werror -Wextra -pedantic
INCLUDE=
OBJECTS=
SOURCES=\
main.c \
commandlinereader.c \
commandpromptprinter.c \
libshell.a \
functionindex.c \
print_char.c \
printenvironment.c \
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
