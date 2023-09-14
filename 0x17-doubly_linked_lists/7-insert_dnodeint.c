#include "lists.h"
#include <stdlib.h>
/**
 * insert_dnodeint_at_index - insert in nth index
 * @idx: index
 * @n: number
 *
 * Return: NULL on failure, tmp on success
*/
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int i = 0;
	dlistint_t *tmp;
	dlistint_t *head;

	if (h == NULL)
		return (NULL);

	head = *h;

	while (head->prev != NULL)
		head = head->prev;

	tmp = NULL;

	while (head != NULL)
		{
			if (i == idx)
			{
				if (head->next == NULL)
					tmp = add_dnodeint_end(h, n);
				else
				{
					tmp = malloc(sizeof(dlistint_t));
					if (tmp != NULL)
					{
						tmp->n = n;
						tmp->next = head->next;
						tmp->prev = head;
						head->next->prev = tmp;
						head->next = tmp;
					}
				}
				break;
			}
			head = head->next;
			i++;
		}
	return (tmp);
}
