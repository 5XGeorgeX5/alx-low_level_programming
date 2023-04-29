#include <stdlib.h>
#include "lists.h"

/**
 * add_nodeint - adds a new node at the beginning of a listint_t list
 * @head: a pointer to the list
 * @n: the new element
 *
 * Return: the address of the new element
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	list_t *x = malloc(sizeof(list_t));

	if (!n)
		return (NULL);

	x->n = n;
	x->next = *head;
	*head = n;
	return (*head);
}
