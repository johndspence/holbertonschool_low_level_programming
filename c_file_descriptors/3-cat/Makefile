CC=gcc
CFLAGS= -Wall -Werror -Wextra -pedantic
INCLUDE=
OBJECTS=
SOURCES=3-cat.c
TARGET=3-cat

all: 3-cat

3-cat : $(SOURCES)
	$(CC) $(CFLAGS) $(SOURCES) -o $(TARGET)

.PHONY: clean

clean :
	rm $(OBJECTS) $(TARGET)

re :
	$(CC) $(CFLAGS) $(SOURCES) -o $(TARGET)
