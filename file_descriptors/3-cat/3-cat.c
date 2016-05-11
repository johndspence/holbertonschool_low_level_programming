#include <fcntl.h>
#include <stdio.h>

int read(int handle, void *buffer, int nbyte);
int write(int handle, void *buffer, int nbyte);
int close(int handle);

int main(int argc, char *argv[])
{
  int fd;
  int len;
  char buf[BUFSIZ];

  /* if the program name and 1 argument are received
   * try to open the file passed as argument
   */
  if (argc == 2)
    {
      /* open, read, write, and close with error
       * checking at each stage.
       */
      fd = open(argv[1], O_RDWR);
      if (fd == -1)
        {
          perror("open");
          return 1;
        }
      len = read(fd, buf, BUFSIZ);
      if (len == -1)
        {
          perror("read");
          close(fd);
        return 1;
        }
      if ((write(1, buf, len)) == -1)
        {
          perror("write");
          close(fd);
          return 1;
        }
      if ((close(fd)) == -1)
        return 1;
      return 0;
    }
  return 1;
}
