#include <stdlib.h>
#include "hash_tables.h"

/**
 * hash_table_create - creates table and initialize to null
 * @size: size of the table needed
 *
 * Return: pointer to table
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *table = NULL;

	table = malloc(sizeof(hash_table_t));
	if (table == NULL)
		return (NULL);

	table->size = size;
	table->array = malloc(size * sizeof(hash_node_t));
	if (table->array == NULL)
	{
		free(table);
		return (NULL);
	}
	return (table);
}
