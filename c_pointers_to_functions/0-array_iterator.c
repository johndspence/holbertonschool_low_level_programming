#include <stdio.h>
void array_iterator(int *array, int size, void (*action_func)(int));

int i = 0;
/* iterates through array from i to 6 returning passed pointer to */
/* action_function along with reference to array[i], the element to be */
/* printed */
void array_iterator(int *array, int size, void (*action_func)(int)){
  while (i < size) {
    (*action_func)(array[i]);
    i=i+1;
  }
}
