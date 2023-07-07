#include "hash_tables.h"

/**
 * hash_table_create - creates a hash table
 * @size: the size of the array
 *
 * Return: the new hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new;

	new->size = size;
	new->array = malloc(sizeof(hash_node_t *) * size);
	if (new->array)
		return (new);
	return (NULL);
}
