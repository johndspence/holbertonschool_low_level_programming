#include <sys/stat.h>
#include <unistd.h>


int print_char(char c)
    {
        return (write(1, &c, 1));
    }

int main(int argc, char *argv[])
{
    /* Create  struct of type stat */
    struct stat Filestats;

    if (argc != 2)
        return 1;



    /* Populate that struct with results of lstat on argv[1]
     * which is the filename */
    if (lstat(argv[1], &Filestats) == -1)
        {
            return 1;
        }
    /* Print resolution of binary operator operating on st_mode
     * variable and macros for each permission */
    print_char( (S_ISDIR(Filestats.st_mode)) ? 'd' : '-');
    print_char( (Filestats.st_mode & S_IRUSR) ? 'r' : '-');
    print_char( (Filestats.st_mode & S_IWUSR) ? 'w' : '-');
    print_char( (Filestats.st_mode & S_IXUSR) ? 'x' : '-');
    print_char( (Filestats.st_mode & S_IRGRP) ? 'r' : '-');
    print_char( (Filestats.st_mode & S_IWGRP) ? 'w' : '-');
    print_char( (Filestats.st_mode & S_IXGRP) ? 'x' : '-');
    print_char( (Filestats.st_mode & S_IROTH) ? 'r' : '-');
    print_char( (Filestats.st_mode & S_IWOTH) ? 'w' : '-');
    print_char( (Filestats.st_mode & S_IXOTH) ? 'x' : '-');
    print_char('\n');
    return 0;
}
