#include <stdlib.h>
#include "str_struct.h"

/* free the struct (includes the int) and the string field */
void free_string_struct(struct String *str)
{
free (str);
free (str->str);
}
