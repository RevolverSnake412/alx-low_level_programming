#include "lists.h"
#include <stdio.h>
/**
 *
*/
size_t dlistint_len(const dlistint_t *h)
{
	int count = 0;

	while (h->prev != NULL)
		h = h->prev;

	for (; h != NULL; count++)
		h = h->next;

	return(count);
}
