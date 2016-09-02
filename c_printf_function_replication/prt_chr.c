#include <unistd.h>

/* Prints each character passed to it */

int prt_chr(char c){
	return write(1, &c, 1);
}
