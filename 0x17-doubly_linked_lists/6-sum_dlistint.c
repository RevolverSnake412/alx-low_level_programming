#include "lists.h"
#include <stdio.h>
/**
 * sum_dlistint - sum of all nodes' elements (integers)
 * @head: head
 *
 * Return: Sum
*/
int sum_dlistint(dlistint_t *head)
{
	int S = 0;

	while (head->prev != NULL)
		head = head->prev;

	S = head->n;

	while (head->next != NULL)
	{
		head = head->next;
		S += head->n;
	}

	return (S);
}
