#include <stdlib.h>
#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end of a listint_t list
 * @head: a pointer to the list
 * @n: the new element
 *
 * Return: the address of the new element
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *x = malloc(sizeof(listint_t));
	listint_t **tmp = head;

	if (!x)
		return (NULL);
	x->n = n;
	x->next = NULL;
	while (*tmp)
		tmp = &((*tmp)->next);
	*tmp = x;
	return (*tmp);
}
