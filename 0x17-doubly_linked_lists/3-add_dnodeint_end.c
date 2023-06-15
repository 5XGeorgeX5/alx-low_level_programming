#include "lists.h"

/**
 * add_dnodeint_end - adds a new node at the end
 * @head: the head of a dlistint_t list
 * @n: the new element
 *
 * Return: the address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *tmp, *current;

	if (!head)
		return (NULL);
	tmp = malloc(sizeof(dlistint_t));
	if (!tmp)
		return (NULL);
	tmp->n = n;
	tmp->next = NULL;
	if (*head == NULL)
	{
		tmp->prev = NULL;
		*head = tmp;
	}
	else
	{
		current = *head;
		while (current->next)
			current = current->next;
		current->next = tmp;
		tmp->prev = current;
	}
	return (tmp);
}
