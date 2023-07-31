#include "lists.h"
#include <stdlib.h>
/**
 * free_listint2 - frees memory
 * @head: structure
*/
void free_listint2(listint_t **head)
{
	listint_t *new;

	if (!head)
		return;
	else
	{
		while (*head)
		{
			new = (*head)->next;
			free((*head));

			*head = new;
		}
	}
	*head = NULL;
}
