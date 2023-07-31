#include "lists.h"
/**
 * pop_listint - pop_listint
 * @head: linked list
 *
 * Return: n
*/
int pop_listint(listint_t **head)
{
	listint_t *new;
	int n = (*head)->n;

	new = (*head)->next;
	(*head) = new;

	return (n);
}
