#include "hash_tables.h"
/**
 * hash_table_create - creates a new hash table
 * @size: the size of the hash table
 *
 * Return: always returns the table
*/
hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned long int i = 0;
	hash_table_t *hash_table = malloc(sizeof(hash_node_t));

	if (!hash_table)
		return (NULL);

	hash_table->size = size;
	hash_table->array = malloc(sizeof(hash_node_t *) * size);

	for (; i < hash_table->size; i++)
		hash_table->array[i] = NULL;

	return (hash_table);
}
