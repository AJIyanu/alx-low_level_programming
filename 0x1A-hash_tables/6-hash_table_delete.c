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

	for(index = 0; index < ht->size; index++)
		free(ht->array[index]);
	free(ht);
}
