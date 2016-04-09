#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
int (*get_op_func(char c))(int, int);
int num1;
int num2;
int print_char(char c);
int answer;
void print_number(int n);


/* Retrieve arguments */
int main(int ac, char **av) {
  if((ac == 4) && (atoi(av[1]) >= 0) && (atoi(av[1]) <= 9) && (atoi(av[3]) >= 0) && \
    (atoi(av[3]) <= 9) && (av[2][1] == '\0') && ((*av[2] == '+') || \
    (*av[2] == '-') || (*av[2] == '*') || (*av[2] == '/')))
    {
    num1 = atoi(av[1]);
    num2 = atoi(av[3]);
    answer = ((*get_op_func(*av[2]))(num1, num2));
    print_number(answer);
    print_char('\n');
    return(0);
  }
return(1);
}


/* inclusion of print number function in order to avoid printf */
void print_number(int n){
  int ncopy;
  int power=10;
  int printnum;

if (n < 0){
    n = n*-1;
    print_char ('-');
    }
ncopy = n;

while (ncopy > 9){
    ncopy = ncopy/10;
    power = power * 10;}

power = power / 10;
ncopy = n;

while (ncopy > 0){
printnum = ncopy / power;
ncopy=ncopy % power;
power = power / 10;
print_char(printnum + '0'); }

if (n == 0){
print_char ('0');}
}


/* inclusion of print_char function in order to avoid printf */
int print_char(char c)
{
  return (write(1, &c, 1));
}
