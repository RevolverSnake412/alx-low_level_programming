#include "lists.h"
#include <stdio.h>
/**
 * print_listint - print_listint
 * @listint_t: our beloved structur
 *
 * Return: the number of elements
*/
size_t print_listint(const listint_t *h)
{
	int i = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		i++;
	}

	return (i);
}
