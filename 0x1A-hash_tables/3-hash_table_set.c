#include "hash_tables.h"

/**
 * hash_table_set - adds an element to the hash table
 * @ht: the hash table
 * @key: the key
 * @value: the value associated with the key
 *
 * Return: 1 if it succeeded, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new;
	char *value_copy;
	unsigned long int i;

	if (!ht || !key || *key == '\0' || !value)
		return (0);

	value_copy = strdup(value);
	if (value_copy == NULL)
		return (0);

	i = key_index((const unsigned char *)key, ht->size);
	if (!strcmp(ht->array[i]->key, key))
	{
		free(ht->array[i]->value);
		ht->array[i]->value = value_copy;
		return (1);
	}

	new = malloc(sizeof(hash_node_t));
	if (new == NULL)
	{
		free(value_copy);
		return (0);
	}
	new->key = strdup(key);
	if (new->key == NULL)
	{
		free(new);
		free(value_copy);
		return (0);
	}
	new->value = value_copy;
	new->next = ht->array[i + 1];
	ht->array[i] = new;

	return (1);
}
