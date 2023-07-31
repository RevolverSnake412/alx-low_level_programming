#include "lists.h"
/**
 * listint_len - listint_len
 * @h: structure
 *
 * Return: number of elements
*/
size_t listint_len(const listint_t *h)
{
	int i = 0;

	while (h)
	{
		i++;
		h = h->next;
	}

	return (i);
}
