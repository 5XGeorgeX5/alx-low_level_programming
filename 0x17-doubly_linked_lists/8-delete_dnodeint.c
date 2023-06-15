#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes a node at a certain index
 * @head: the head of a dlistint_t list
 * @index: index of the node to delete
 *
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *tmp, *current = NULL;
	unsigned int i = 0;

	if (!head || *head == NULL)
		return (-1);
	tmp = *head;
	if (!index)
	{
		*head = (*head)->next;
		if (*head)
		(*head)->prev = NULL;
		free(tmp);
		return (1);
	}

	for (i = 0; tmp && i < index - 1; i++)
		tmp = tmp->next;
	if (i != index - 1)
		return (-1);
	current = tmp->next;
	tmp->next = current->next;
	if (current->next)
		current->next->prev = tmp;
	free(current);
	return (1);
}
