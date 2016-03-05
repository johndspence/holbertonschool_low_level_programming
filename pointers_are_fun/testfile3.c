#include <stdio.h>

int main(void)
{
  	int *p;
  	int a[2];
  	int n;
  	printf("address of n %p ", &n);
  	  	printf("value of n %u\n", n);
  	printf("address of p %p ", &p);
  	printf("value of p %d\n", p);
  	printf("address of a %p ", &a);
  	printf("value of a %u\n", a);
  	printf("p = &n\n");
  	p = &n;
  	printf("address of p %p ", p);
  	printf("value of p %p\n", p);
  	printf("address p + 1: %p ", p + 1);
  	printf("value of p + 1: %d\n", *(p + 1));
  	printf("address of p + 2: %p", p + 2);
  	printf("value of p + 2: %d\n", *(p + 2));
  	printf("address of p + 3: %p", p + 3);
  	printf("value of p + 3: %d\n", *(p + 3));
  	printf("address of p + 4: %p", p + 4);
  	printf("value of p + 4: %d\n", *(p + 4));
  	printf("address of p + 5: %p", p + 5);
  	printf("value of p + 5: %d\n", *(p + 5));
  	printf("address of p + 6: %p", p + 6);
  	printf("value of p + 6: %d\n", *(p + 6));
  	printf("address of p + 7: %d", p + 7);
  	printf("value of p + 7: %d\n", *(p + 7));
  	printf("address of p + 8: %p", p + 8);
  	printf("value of p + 8: %d\n", *(p + 8));
  	
  /* possible since a is evaluated */
  /* as an int * in this context */
  	p = a;
  	printf("p = a");
  	printf("address of p %p ", p);
  	printf("value of p %p\n", &p);
  	printf("address p + 1: %p ", p + 1);
  	printf("value of p + 1: %d\n", *(p + 1));
  	  	return (0);
}