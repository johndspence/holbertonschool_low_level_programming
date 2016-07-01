#include <unistd.h>

/* print_char using write */
int print_char(char c)
{
  return (write(1, &c, 1));
}
