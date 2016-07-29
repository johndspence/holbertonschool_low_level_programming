#include "tree_hdr.h"

int array_length(char **array)
{
	int i;

	i = 0;
	while(array[i] != NULL)
	{
		i++;
	}
	return i;
}
