#include "lists.h"
#include <stdlib.h>
/**
 * add_nodeint_end - add node in the end
 * @head: structure
 * @n: const int
 *
 * Return: new on success, NULL if fails
*/
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new = malloc(sizeof(listint_t));
	listint_t *first = *head;

	if (!new)
		return (NULL);

	if (*head == NULL)
	{
		new->n = n;
		new->next = NULL;
		*head = new;
		return (new);
	}

	new->n = n;
	new->next = NULL;

	while (first->next)
		first = first->next;

	first->next = new;

	return (new);
}

