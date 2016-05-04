#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int (*get_op_func(char c))(int, int);
int print_char(char c);
void print_number(int n);

/* Retrieve arguments */
int main(int ac, char **av)
{
  int num1;
  int num2;
  int answer;

  if((ac == 4) && (av[2][1] == '\0') && ((*av[2] == '+') || \
    (*av[2] == '-') || (*av[2] == '*') || (*av[2] == '/')))
    {
    int (*functionaddress)(int, int);

    num1 = atoi(av[1]);
    num2 = atoi(av[3]);
    functionaddress = get_op_func(*av[2]);
    answer = functionaddress(num1, num2);
    printf("%d\n", answer);

    return(0);
    }
return(1);
}
