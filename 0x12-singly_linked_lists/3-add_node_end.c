#include "lists.h"
#include <string.h>
#include <stdlib.h>

/**
 * add_node_end - adds a new node at the end of a list_t list.
 * @head: a pointer to the list
 * @str: the new element
 *
 * Return: the address of the new element
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *n = malloc(sizeof(list_t));
	list_t **tmp = head;

	if (!n)
		return (NULL);
	n->len = strlen(str);
	n->str = strdup(str);
	n->next = NULL;
	while (*tmp)
		tmp = &((*tmp)->next);
	*tmp = n;
	return (*tmp);
}
