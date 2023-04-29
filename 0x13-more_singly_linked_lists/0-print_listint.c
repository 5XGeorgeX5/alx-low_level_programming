#include "lists.h"

/**
 * p_number - print number
 * @n: number to be printed
 *
 */

void p_number(int n)
{
	unsigned int n1;

	if (n < 0)
	{
		n1 = -n;
		_putchar('-');
	}
	else
		n1 = n;

	if (n1 / 10)
		p_number(n1 / 10);

	_putchar((n1 % 10) + '0');
}


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
		p_number(h->n);
		_putchar('\n');
	}
	return (i);
}
