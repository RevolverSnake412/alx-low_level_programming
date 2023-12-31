#include "hash_tables.h"
/**
 * key_index - Get the index for our table
 * @key: the key
 * @size: the size of the hash table
 *
 * Return: returns the index of the key in the hash table
*/
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
