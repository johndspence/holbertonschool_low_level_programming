CC=gcc
CFLAGS= -Wall -Werror -Wextra -pedantic
INCLUDE=
OBJECTS=
SOURCES=1-copy_content.c
TARGET=1-copy_content

all: 0-print_content

0-print_content : $(SOURCES)
	$(CC) $(CFLAGS) $(SOURCES) -o $(TARGET)

.PHONY: clean

clean :
	rm $(OBJECTS) $(TARGET)

re :
	$(CC) $(CFLAGS) $(SOURCES) -o $(TARGET)
