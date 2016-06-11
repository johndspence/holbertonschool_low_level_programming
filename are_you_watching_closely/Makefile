CC=gcc
CFLAGS= -Wall -Werror -Wextra -pedantic -c
INCLUDE=
OBJECTS=
SOURCES=\
libprintf.c \



TARGET=libprintf.a

all: libprintf.a

libprintf.a : $(SOURCES)
	$(CC) $(CFLAGS) $(SOURCES) -o $(TARGET)

.PHONY: clean

clean :
	rm $(OBJECTS) $(TARGET)

re :
	$(CC) $(CFLAGS) $(SOURCES) -o $(TARGET)
