#include "lists.h"
/**
 *
*/
int pop_listint(listint_t **head)
{
	listint_t *new;
	int n = (*head)->n;

	while (*head)
	{
		new = (*head)->next;
		(*head) = new;
	}

	return (n);
}
