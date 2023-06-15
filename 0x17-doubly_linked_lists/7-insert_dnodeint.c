#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 * @h: the head of a dlistint_t list
 * @idx: the index
 * @n: the new element
 *
 * Return: the address of the new node
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int i;
	dlistint_t *new, *tmp;

	if (!h)
		return (NULL);
	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);
	tmp = *h;
	new->n = n;
	if (!idx)
	{
		new->next = *h;
		if (*h)
			(*h)->prev = new;
		*h = new;
		return (new);
	}
	for (i = 0; tmp && i < idx - 1; i++)
		tmp = tmp->next;
	if (i == idx - 1)
	{
		new->next = tmp->next;
		new->prev = tmp;
		tmp->next->prev = new;
		tmp->next = new;
		return (new);
	}
	return (NULL);
}
