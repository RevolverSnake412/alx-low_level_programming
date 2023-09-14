#include "lists.h"
/**
 * sum_dlistint - sum of all nodes' elements (integers)
 * @head: head
 *
 * Return: Sum
*/
int sum_dlistint(dlistint_t *head)
{
	int S = 0, n;

	while (head->prev != NULL)
	{
		n = head->n;
		head = head->prev;
		S += n;
	}
	return (S);
}
