#include <stdlib.h>
#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: a pointer to the list
 * @idx: the index
 * @n: the new element
 *
 * Return:  the address of the new node
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *x = malloc(sizeof(listint_t));

	if (!x || idx < 0)
		return (NULL);

	x->n = n;
	node **tmp = head;

	for (i = 0; i < idx && *tmp; i++)
		tmp = &((*tmp)->next);
	if (*tmp == NULL)
		return (NULL);
	x->next = *tmp;
	*tmp = x;
}
