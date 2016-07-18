#include<stdlib.h>
#include<stdio.h>

void quick_sort(int *array, int size)
{
    int left;
    int right;
    int pivot;
    int temp;

    left = 0;
    right = size - 1;

    if (size < 2)
        return;
    /* Sort smaller values on left of pivot
     * larger on right */

    pivot = array[rand() % size];
    while (left < right) {
        while (array[left] < pivot)
        {
            left++;
        }
        while (array[right] > pivot)
        {
            right--;
        }
        if (array[left] > array[right])
        {
            temp = array[left];
            array[left] = array[right];
            array[right] = temp;
            } else {
                left++;
            }
        }
    /* Sort each side of the pivot */
    quick_sort(array, left);
    quick_sort(&array[left], size - left);
}
