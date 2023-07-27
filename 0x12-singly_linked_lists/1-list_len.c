#include "lists.h"
/**
 * list_len - list length
 * @h: linked list
 *
 * Return: element
*/
size_t list_len(const list_t *h)
{
	int element = 0;

	while (h)
	{
		element++;
		h = h->next;
	}

	return (element);
}
