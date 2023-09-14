#include "lists.h"
#include <stdlib.h>
/**
 * add_dnodeint - add new node
 * @head: head
 * @n: element in int
 *
 * Return: node
*/
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *node;
	dlistint_t *h;

	node = malloc(sizeof(dlistint_t));
	if (node == NULL)
		return (NULL);

	node->n = n;
	node->prev = NULL;
	h = *head;

	if (h != NULL)
		while (h->prev != NULL)
			h = h->prev;

	node->next = h;

	if (h != NULL)
		h->prev = node;

	*head = node;
	return (node);
}
