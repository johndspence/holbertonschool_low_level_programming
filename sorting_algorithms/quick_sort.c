#include <stdlib.h>

void quick_sort(int *array, int size)
{
    int left;
    int right;
    int pivot;
    int swap;

    left = 0;
    right = size -1;
    /* Returns if the partition is sorted */
    if (size < 2)
        return;
    /* Chooses a random pivot point */
    /* Swaps values until sorted small to left and larger right */
    pivot = array[size/2];
    while (left < right) {
        while (array[left] < pivot)
            left++;
        while (array[right] > pivot)
            right--;
        if (array[left] > array[right]) {
            swap = array[left];
            array[left] = array[right];
            array[right] = swap;
            } else {
                right++;
            }
        }
    /* Recursively sorts each partition */
    quick_sort(array, left);
    quick_sort(&array[left], size - left);
}
