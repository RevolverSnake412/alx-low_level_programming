#include "lists.h"
#include <stdio.h>
/**
 * dlistint_len - counts elements
 * @h: head
 *
 * Return: count
*/
size_t dlistint_len(const dlistint_t *h)
{
	int count = 0;

	if (h == NULL)
		return (count);

	while (h->prev != NULL)
		h = h->prev;

	for (; h != NULL; count++)
		h = h->next;

	return (count);
}
