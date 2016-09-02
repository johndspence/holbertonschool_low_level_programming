#include "hashtable.h"
#include <stdlib.h>
#include <string.h>

unsigned int hash(const char *key, unsigned int size);

/*
 * 1. Iterate through HashTable->array
 *      Iterate through nodes
 *          Free each key
 *          Free each value
 *      Free each pointer to first node in HashTable
 * 2. Free HashTable
 *      Free pointer to array in HashTable
 *      Free HashTable itself
 * 3. Check for memory leaks using Valgrind
 */

 void ht_free(HashTable *hashtable) {
     unsigned int index;
     List *current_ptr;
     List *temp_ptr;

     for (index = 0; index < hashtable->size; index++)
     {
        /*
         * current_ptr will point to instance of node List whose elements
         * are currently being freed, with the starting value of array[index]
         * If current_ptr = NULL, we are on the final node in the linked list
         */
         current_ptr = hashtable->array[index];
         while (current_ptr != NULL)
         {
             /*
              * free key and value of List pointed to by current_ptr 
              * key and value are actually pointers also
              */
             free (current_ptr->key);
             free (current_ptr->value);
             /*
              * Before freeing the List pointed to by current_ptr
              * we place a copy of the next pointer in temp_ptr, in order to be
              * able to access the next node after next is freed
              */
             temp_ptr = current_ptr->next;
             /* Now we can free the node */
             free (current_ptr);
             /* Make current_ptr point to next node and repeat */
             current_ptr = temp_ptr;
         }
    }
        /* free malloced array whose pointer is in hashtable */
        free (hashtable->array);
        /* free malloced hashtable itself */
        free (hashtable);
}
