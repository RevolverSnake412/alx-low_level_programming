#include "hash_tables.h"
/**
 * hash_table_delete - wipes a hash table
 * @ht: the hash table
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i = 0;
	hash_table_t *hd = ht;
	hash_node_t *sel_node;
	hash_node_t *temp;

	for (; i < ht->size; i++)
	{
		if (ht->array[i] != NULL)
		{
			sel_node = ht->array[i];
			while (sel_node != NULL)
			{
				temp = sel_node->next;
				free(sel_node->key);
				free(sel_node->value);
				free(sel_node);
				sel_node = temp;
			}
		}
	}
	free(hd->array);
	free(hd);
}
