
/* iterate through each element of array and pass the value
 * to action function as referenced by &action
 */
void array_iterator(int *array, int size, void (*action_func)(int))
  {
    int i;
    int elem;
    i = 0;
    while (i < size)
      {
        elem = array[i];
        action_func(elem);
        i++;
      }

  }
