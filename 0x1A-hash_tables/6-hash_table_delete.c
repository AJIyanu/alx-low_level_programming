#include <stdlib.h>
#include "hash_tables.h"

/**
 * hash_table_delete - deletes the has table
 * @ht: address
 *
 * Return: void
 */

void hash_table_delete(hash_table_t *ht)
{
	unsigned long int index = 0;
	hash_node_t *node = NULL;
	hash_node_t *tmp = NULL;

	for (index = 0; index < ht->size; index++)
	{
		node = ht->array[index];
		while (node != NULL)
		{
			tmp = node->next;
			free(node->key);
			free(node->value);
			free(node);
			node = tmp;
		}
	}
	free(ht->array);
	free(ht);
}
