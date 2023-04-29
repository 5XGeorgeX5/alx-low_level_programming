#include <stdlib.h>
#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t linked list
 * @head: a pointer to the list
 *
 * Return: returns the head node’s data
 */

int pop_listint(listint_t **head)
{
	listint_t *temp;
	int num;

	if (!head || *head == NULL)
		return (0);

	num = (*head)->n;
	temp = *head;
	*head = temp->next;
	free(temp);
	return (num);
}
