#include "lists.h"
#include <stdlib.h>
/**
 * pop_listint - pop_listint
 * @head: linked list
 *
 * Return: n
*/
int pop_listint(listint_t **head)
{
	listint_t *new;
	int n;

	if (!*head)
		return (0);

	new = (*head)->next;
	n = (*head)->n;
	free(*head);
	(*head) = new;

	return (n);
}
