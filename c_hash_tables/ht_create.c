#include "hashtable.h"
#include <stdlib.h>
#include <stdio.h>

/*
 * 1. Create instance of HashTable using malloc
 * 2. Create instance of array to hold pointers to List nodes,
 *    also using malloc respecting size
 * 3. Populate size of this instance of HashTable
 * 4. Populate array of this instance of HashTable
 * 5. Return pointer to this instance of HashTable
 */

HashTable *ht_create(unsigned int size)
{
    HashTable *hash_table_ptr;
    List **list_ptrs;

    hash_table_ptr = malloc(sizeof(HashTable));
        if (hash_table_ptr == NULL) {
            return NULL;
        }
    list_ptrs = malloc(sizeof(List *)*size);
        if (list_ptrs == NULL) {
            return NULL;
        }
    hash_table_ptr->size = size;
    hash_table_ptr->array = list_ptrs;
    return hash_table_ptr;

}
