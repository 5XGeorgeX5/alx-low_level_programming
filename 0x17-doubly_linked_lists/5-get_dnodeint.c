#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node
 * @head: the list
 * @index: the index
 *
 * Return: the nth node of a dlistint_t linked list.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i;

	for (i = 0; i < index && head; i++)
		head = head->next;

	return (head ? head : NULL);
}
