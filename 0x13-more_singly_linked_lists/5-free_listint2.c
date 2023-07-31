#include "lists.h"
#include <stdlib.h>
/**
 * free_listint - frees memory
 * @head: structure
*/
void free_listint2(listint_t **head)
{
	listint_t *new;

	while (*head != NULL)
	{
		new = (*head)->next;
		free((*head));

		*head = new;
	}
	*head = NULL;
}
