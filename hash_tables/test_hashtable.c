#include "hashtable.h"
#include <stdio.h>

int print_hashtable(HashTable *ht);
HashTable *ht_create(unsigned int size);
int ht_put(HashTable *hashtable, const char *key, const char *value);
unsigned int hash(const char *key, unsigned int size);
char *ht_get(HashTable *hashtable, const char *key);

int main(void) {
  HashTable *ht = ht_create(5);
  ht_put(ht, "One", "Value One");
  ht_put(ht, "Two", "Value Two");
  ht_put(ht, "Three", "Value Three");
  ht_put(ht, "Four", "Value Four");
  ht_put(ht, "Five", "Value Five");
  ht_put(ht, "Six", "Value Six");
  ht_put(ht, "Seven", "Value Seven");
  print_hashtable(ht);
  return 0;
}

int print_hashtable(HashTable *ht) {
  unsigned int i;
  List *listptr;

  i = 0;

  for ( ; i < ht->size ; i++) {
    printf("%d\n", i);
    /* traverse list */
    listptr = ht->array[i];
    printf("\t--------\n");
    while (listptr != NULL) {
      printf("\tkey: %s\n\tval: %s\n\t--------\n", listptr->key, listptr->value);
      printf("from ht_get%s\n", ht_get(ht,listptr->key));
      listptr = listptr->next;
    }
    printf("\tNULL\n\t--------\n");
  }


  return 0;
}
