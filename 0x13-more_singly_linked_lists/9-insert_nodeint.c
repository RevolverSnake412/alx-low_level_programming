#include "lists.h"
#include <stdlib.h>
/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: linked list
 * @idx: index
 * @n: node
 *
 * Return: new if success, NULL if failure
*/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *new = malloc(sizeof(listint_t));
	listint_t *first = *head;

	if (!new || !head)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (idx == 0)
	{
		new->next = (*head);
		(*head) = new;
		return (new);
	}
	for (i = 0; i < idx; i++)
	{
		if (idx == i + 1)
		{
			new->next = first->next;
			first->next = new;
			return (new);
		}
		else
		{
			first = first->next;
		}
	}
	return (NULL);
}
