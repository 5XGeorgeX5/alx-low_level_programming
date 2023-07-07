#include "hash_tables.h"

/**
 * hash_table_delete - deletes a hash table
 * @ht: the hash table
 *
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *head, *tmp;
	unsigned long int i;

	if (!ht)
		return;
	for (i = 0; i < ht->size; i++)
	{
		head = ht->array[i];
		while (head)
		{
			tmp = head->next;
			free(head->value);
			free(head->key);
			free(head);
			head = tmp;
		}
	}
	free(ht->array);
	free(ht);
}
