#include <stdio.h>
int i = 0;

int advanced_search(int *array, int size, int (*check_func)(int)){
  /* printf("%d\n array[1]=", array[1]); */
  /* printf("%d\n size=", size); */
  while (i < size){
    /* printf("%d\n i=", i);*/
  /*   printf("%d\n j=", j);*/
    if ((*check_func)(array[i]) == 1) {
      return (i);
    }
      i=i+1;
  }
    return (-1);
}
