#include "list.h"
#include <string.h>

int add_end_dl_list(List **, char *);

/* iterate through array, calling add_end_dl_list to add a node for each
 * struct
 */
List *array_to_dl_list(char **array)
{
	List *list;
	int i;

	i = 0;

	list = NULL;
	while (array[i] != '\0')
	{
		if(add_end_dl_list(&list, array[i]) == 1) {
			return NULL;
		}
		i++;
	}
	return (list);
}
