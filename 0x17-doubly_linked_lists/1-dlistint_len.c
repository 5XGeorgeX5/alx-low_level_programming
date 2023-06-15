#include "lists.h"

/**
 * dlistint_len - returns the number of elements
 * @h: the head of a dlistint_t list
 *
 * Return: the number of elements
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t n = 0;

	while (h)
	{
		h = h->next;
		n++;
	}
	return (n);
}
