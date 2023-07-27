#include "lists.h"
#include <stdlib.h>
/**
 * free_list - freeing bytes
 * @head: list_t
*/
void free_list(list_t *head)
{
	list_t *new;

	while (head)
	{
		new = head->next;
		free(head->str);
		free(head);
		head = new;
	}
}
