#include "lists.h"
#include <stdlib.h>
/**
 * add_dnodeint_end - add new node at the end
 * @head: head
 * @n: element in int
 *
 * Return: node
*/
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
        dlistint_t *node;
        dlistint_t *h;

        node = malloc(sizeof(dlistint_t));
        if (node == NULL)
                return (NULL);

        node->n = n;
        node->next = NULL;
        h = *head;

        if (h != NULL)
                while (h->next != NULL)
                        h = h->next;

        node->prev = h;

        if (h != NULL)
                h->next = node;

        *head = node;
        return (node);
}
