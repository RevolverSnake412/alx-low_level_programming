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

	if (!node)
		return (NULL)

	for (i = 0; i <= index; i++)
	{
		node = head;
		head = head->next;
	}

	if (!node)
		return (NULL);

	return (node);
}
