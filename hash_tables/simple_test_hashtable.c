#include "hashtable.h"
#include <stdio.h>

HashTable *ht_create(unsigned int size);

int main(void) {

    HashTable *hash_table_ptr;
    
    hash_table_ptr = ht_create(5);
    printf("%d\n", hash_table_ptr->size);
    printf("%p\n", (void*)hash_table_ptr);
    return 0;
}
