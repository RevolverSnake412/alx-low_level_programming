#include "lists.h"
/**
 * get_nodeint_at_index - returns nth node
 * @head: linked list
 * @index: index
 *
 * Return: node
*/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;
	listint_t *node = head;

	i = 0;

	while (i <= index - 1)
	{
		node = head;
		head = head->next;
	}

	if (!node)
		return (NULL);

	return (node);
}
