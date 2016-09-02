CC=gcc
CFLAGS= -Wall -Werror -Wextra -pedantic
INCLUDE=
OBJECTS=
SOURCES=0-print_content.c
TARGET=0-print_content

all: 0-print_content

0-print_content : $(SOURCES)
	$(CC) $(CFLAGS) $(SOURCES) -o $(TARGET)

.PHONY: clean

clean :
	rm $(OBJECTS) 0-print_content

re :
	$(CC) $(CFLAGS) $(SOURCES)
