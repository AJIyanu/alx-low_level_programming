#include <stdlib.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 * hash_table_print - prints hash table in order
 * @ht: all we have is the address
 *
 * Return: no shit but foid
 */

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i = 0;
	hash_node_t *node = NULL;
	int indicator = 0;

	if (ht == NULL)
		return;
	printf("{");
	while (i < ht->size)
	{
		node = ht->array[i];
		while (node != NULL)
		{
			if (indicator > 0)
				printf(", ");
			printf("'%s': '%s'", node->key, node->value);
			indicator++;
			node = node->next;
		}
		i++;
	}
	printf("}\n");
}

