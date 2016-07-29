#include "tree_hdr.h"

int array_length(char **array)
{
	int i;

	i = 0;
	while(array[i] != NULL)

	{
		i++;
	}
		printf("array length = %d\n",i);
	return i;
}
