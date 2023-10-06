#include "hash_tables.h"
/**
 * hash_table_print - rints a hash table
 * @ht: the hash table.
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i = 0;
	unsigned char flag;
	hash_node_t *sel_node;

	if (ht == NULL)
		return;

	printf("{");

	flag = 0;
	for (; i < ht->size; i++)
	{
		if (ht->array[i] != NULL)
		{
			if (flag == 1)
				printf(", ");
			sel_node = ht->array[i];
			while (sel_node)
			{
				printf("'%s': '%s'", sel_node->key, sel_node->value);
				sel_node = sel_node->next;
				if (sel_node)
					printf(", ");
			}
			flag = 1;
		}
	}
	printf("}\n");
}
