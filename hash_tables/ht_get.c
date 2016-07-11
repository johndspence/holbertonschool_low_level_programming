#include "hashtable.h"
#include <stdlib.h>
#include <string.h>

unsigned int hash(const char *key, unsigned int size);

/*
 * 1. Retrieve correct index of HashTable->array using hash function
 * 2. Find correct node by iterating through nodes using *next variable
 * 3. Return value in correct node
 */

char *ht_get(HashTable *hashtable, const char *key) {
    int index;
    List *pair;

    index = 0;
    index = hash(key, hashtable->size);
    pair = hashtable->array[index];

    while (pair->key != key) {
        pair = pair->next;
        if (pair == NULL) {
            return NULL;
        }
    }
    return pair->value;
}
