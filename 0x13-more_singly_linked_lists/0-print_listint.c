#include "lists.h"

/**
 * print_listint - prints all the elements of a listint_t list
 * @h: the list
 *
 * Return: the number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t i = 0;

	for (; h; h = h->next)
	{
		i++;
		printf("%i\n", h->n);
	}
	return (i);
}
