

/* 1. Iterate through HashTable
 *      Iterate through nodes
 *          Free each key
 *          Free each value
 *      Free each pointer to first node in HashTable
 * 2. Free HashTable
 *      Free pointer to array in HashTable
 *      Free HashTable itself
 * 3. Check for memory leaks using Valgrind
 */ 
