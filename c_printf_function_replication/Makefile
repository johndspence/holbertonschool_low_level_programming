CC=gcc
CFLAGS= -Wall -Werror -Wextra -pedantic -c
INCLUDE=
OBJECTS=	libprintf.o\
		prt_chr.o\
		prt_hex.o\
		prt_adr.o\
		prt_oct.o\
		prt_str.o\
		prt_num.o\
		prt_num_u.o\

SOURCES=	libprintf.c\
		prt_chr.c\
		prt_hex.c\
		prt_adr.c\
		prt_oct.c\
		prt_str.c\
		prt_num.c\
		prt_num_u.c\

TARGET=libprintf.a

all: libprintf.a

$(OBJECTS): $(SOURCES)
	$(CC) $(CFLAGS) $(SOURCES)

libprintf.a: $(OBJECTS)
	ar -rc libprintf.a $(OBJECTS)
	ranlib libprintf.a

.PHONY: clean

clean:
	rm -f $(OBJECTS) $(TARGET)

re: clean all
