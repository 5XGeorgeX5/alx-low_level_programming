#include "hash_tables.h"

/**
 * hash_table_print - prints a hash table
 * @ht: the hash table
 *
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *search;
	unsigned long int i;
	int comma = 0;

	if (!ht)
		return;
	putchar('{');
	for (i = 0; i < ht->size; i++)
	{
		search = ht->array[i];
		while (search)
		{
			if (comma)
				printf(", ");
			printf("'%s': '%s'", search->key, search->value);
			search = search->next;
			comma = 1;
		}
	}
	printf("}\n");
}
