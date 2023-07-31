#include "lists.h"
/**
 * sum_listint - sum of all nodes
 * @head: linked list
 *
 * Return: sum;
*/
int sum_listint(listint_t *head)
{
	int sum = 0, n;

	if (!head)
		return (0);

	while (head)
	{
		n = head->n;
		head = head->next;
		sum += n;
	}

	return (sum);
}
