#include "hash_tables.h"

/**
 *
*/
hash_table_t *hash_table_create(unsigned long int size)
{
    hash_table_t *hash_table = malloc(sizeof(hash_node_t));

    hash_table->size = size;
    return hash_table;
}
