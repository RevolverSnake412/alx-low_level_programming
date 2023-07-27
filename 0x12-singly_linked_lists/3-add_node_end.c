#include "lists.h"
#include <string.h>
#include <stdlib.h>
/**
 * add_node_end - adds node in the end
 * @head: list_t
 * @str: const char
 *
 * Return: new
*/
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new;
	list_t *temp = *head;
	unsigned int len = 0;

	new = malloc(sizeof(list_t));

	while (str[len])
		len++;

	if (!new)
		return (NULL);

	new->str = strdup(str);
	new->len = len;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}

	while (temp->next)
	{
		temp = temp->next;
	}
	temp->next = new;

	return (new);
}
