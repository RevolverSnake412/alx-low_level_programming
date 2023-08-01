#include <stdlib.h>
#include "lists.h"
/**
 * delete_nodeint_at_index - delete index
 * @head: listed int
 * @index: index
 *
 * Return: 1 succes, -1 fail
*/
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t *new = *head;
	listint_t *select = NULL;

	if (!*head)
		return (-1);

	if (index == 0)
	{
		free(new);

		(*head) = (*head)->next;
		return (1);
	}

	i = 0;

	while (i < index - 1)
	{
		if (!new || new->next == NULL)
			return (-1);
		(*head) = (*head)->next;
	}

	select = new->next;
	new->next = select->next;

	free(select);

	return (1);
}
