#include "lists.h"
/**
 *
*/
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t *new;
	listint_t *select;

	if (!*head)
		return (NULL);

	if (index == 0)
	{
		(*head) = (*head)->next;
		return(1);
	}

	for (i = 0; i < index - 1; i++)
		head = head->next;

	select = new->next;
	new->next = select->next;

	return (1);
}
