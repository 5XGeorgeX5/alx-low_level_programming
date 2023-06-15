#include "lists.h"

/**
 * add_dnodeint - adds a new node at the beginning
 * @head: the head of a dlistint_t list
 * @n: the new element
 *
 * Return: the address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *tmp;

	if (!head)
		return (NULL);
	tmp = malloc(sizeof(dlistint_t));
	if (!tmp)
		return (NULL);
	tmp->n = n;
	tmp->next = *head;
	tmp->prev = NULL;
	(*head)->prev = tmp;
	*head = tmp;
	return (tmp);
}
