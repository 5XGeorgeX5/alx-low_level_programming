#include "lists.h"
#include<string.h>

/**
 * add_node - adds a new node at the beginning of a list_t list.
 * @head: a pointer to the list
 * @str: the new element
 *
 * Return: the address of the new element
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *n = malloc(sizeof(list_t));

	if (!n)
		return (NULL);

	n->len = strlen(str);
	n->str = strdup(str);
	n->next = *head;
	*head = n;
	return (head);
}
