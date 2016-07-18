void insertion_sort(int *array, int size){
	int i;
	int temp;

	i = 0;
	while (i <= (size - 2))
	{
		/* Insertion sort:  If an element is < it's
		 * predecessor, swap them */
		while (i >= 0 && (array[i + 1] < array[i]))
		{
			temp = array[i];
			array[i] = array[i + 1];
			array[i + 1] = temp;
			/* After you swap them, iterate backwards in the
			 * array and repeat the swap until i < 0 */
			i--;
		}
	/* Then iterate forward again until the next instance
	 * where an an element is < than its predecessor */
	i++;
	}
}
