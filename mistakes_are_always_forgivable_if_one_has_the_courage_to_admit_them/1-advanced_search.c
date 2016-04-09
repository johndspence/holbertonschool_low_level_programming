#include <stdio.h>
int i = 0;

int advanced_search(int *array, int size, int j){
  printf("%d\n array[1]=", array[1]);
  printf("%d\n size=", size);
  while (i < size){
    printf("%d\n i=", i);
    printf("%d\n j=", j);
    if (j == array[i]){
      return ('1');
    }
      i=i+1;
  }
    return (-1);
}
