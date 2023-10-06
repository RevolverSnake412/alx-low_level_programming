#include "hash_tables.h"

/**
 *
*/
hash_table_t *hash_table_create(unsigned long int size)
{
    unsigned long int i = 0;
    hash_table_t *hash_table = malloc(sizeof(hash_node_t));
    
    hash_table->size = size;
    hash_table->array = calloc(hash_table->size, sizeof(size));
    
    for (; i < hash_table->size; i++)
        hash_table->array[i] = NULL;

    return hash_table;
}
