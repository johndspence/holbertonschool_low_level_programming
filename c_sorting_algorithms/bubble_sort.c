void bubble_sort(int *array, int size){
	int i;
	int j;
	int temp;

	j = size - 2;
	/*
	 * Outer loop shrinks numbers of elements to be evaluated by one on each
	 * iteration because sorting logic will always put largest element
	 * into last position
	 */
	while (j >= 0)
	{
		i = 0;
		/*
		 * The inner sort compares each element to the one ahead and swaps
		 * them if appropriate.
		 */
		while (i <= j)
		{
			if (array[i] > array[i+1])
			{
				temp = array[i];
				array[i] = array[i+1];
				array[i+1] = temp;
			}
			i++;
		}
	j--;
	}
}
