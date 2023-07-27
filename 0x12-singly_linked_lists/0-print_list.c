#include "lists.h"
#include <stdio.h>

/**
 * print_list - prints a linked list
 * @h: linked list
 *
 * Return: element count
*/
size_t print_list(const list_t *h)
{
	size_t element = 0;

	while (h)
	{
		if (h->str)
			printf("[%d] %s\n", h->len, h->str);
		else
			printf("[0] (nil)\n");
		h = h->next;
		element++;
	}

	return (element);
}
