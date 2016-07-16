void insertion_sort(int *array, int size){
	int i;
	int temp;

	i = 0;
	while (i <= (size - 2))
	{
		while (i >= 0)
		{
			if (array[i + 1] < array[i])
			{
				temp = array[i];
				array[i] = array[i + 1];
				array[i + 1] = temp;
			}
			i--;
		}
		i++;
	}
}
