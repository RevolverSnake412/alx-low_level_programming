#include "lists.h"
#include <stdlib.h>
/**
 * add_nodeint - adds a new node above the prev one
 * @head: structure
 * @n: element
 *
 * Return: new if success, NULL if failed
*/
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new = malloc(sizeof(listint_t));
	int temp;

	if (!new)
		return (NULL);

	new->n = n;
	new->next = NULL;
	(*head)->next = new;

	return (new);
}
