#include "lists.h"

/**
 * sum_dlistint - returns the sum of all the data.
 * @head: the head of a dlistint_t list
 *
 * Return: the sum
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head)
	{
		head = head->next;
		sum += head->n;
	}
	return (sum);
}
