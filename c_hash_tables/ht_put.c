#include "hashtable.h"
#include <stdlib.h>
#include <string.h>

/* 1. Create node of type List
 *      Create temp pointer to List
 *      Create instance of List using malloc
 *      Populate key of List
 *      Populate value of List
 * 2. Place node List at beginning of correct linked list
 *      Using hash function, retrieve index of array
 *      Put array[index] in *next of List node
 *      Put pointer to List in array[index]
 */
unsigned int hash(const char *key, unsigned int size);

int ht_put(HashTable *hashtable, const char *key, const char *value)
{
     List *temp_ptr;
     int index;

     index = 0;
     temp_ptr = malloc(sizeof(List));
     if (temp_ptr == NULL) {
         return 1;
     }
     temp_ptr->key = strdup(key);
     if (temp_ptr->key == NULL) {
         return 1;
     }
     temp_ptr->value = strdup(value);
     if (temp_ptr->value == NULL) {
         return 1;
     }
     index = hash(key, hashtable->size);
     temp_ptr->next = hashtable->array[index];
     hashtable->array[index] = temp_ptr;
     return 0;
}
