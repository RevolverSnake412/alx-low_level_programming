#include "lists.h"
#include <stdio.h>
/**
 * get_dnodeint_at_index - returs the nth node
 * @head: head
 * @index: index of node
 *
 * Return: the nth node
*/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;

	if (head == NULL)
		return (NULL);

	while (head->prev != NULL)
		head = head->prev;

	for (; i < index; i++)
	{
		if (head != NULL)
			head = head->next;
		else
			return (NULL);
	}

	return (head);
}
