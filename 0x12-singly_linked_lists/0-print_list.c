#include "lists.h"

/**
 * print_list -  prints all the elements of a list_t list.
 * @h: The list
 *
 * Return: The number of nodes
 */

size_t print_list(const list_t *h)
{
	size_t num_nodes = 0;

	for (; h; h = h->next)
	{
		if (h->str)
			printf("[%d] %s\n", h->len, h->str);
		else
			printf("[0] (nil)\n");
		num_nodes++;
	}
	return (num_nodes);
}
