#include "lists.h"
#include <stdlib.h>
#include <string.h>
/**
 * add_node - adds new node
 * @head: list_t
 * @str: const char
 *
 * Return: new
*/
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	unsigned int len = 0;

	new = malloc(sizeof(list_t));

	while (str[len])
		len++;

	if (!new)
		return (NULL);
		
	new->str = strdup(str);
	new->len = len;
	new->next = (*head);
	(*head) = new;

	return (new);
}
