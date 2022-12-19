#include <stdlib.h>
#include "hash_tables.h"

/**
 * hash_table_get - retrieve value
 * @ht: table address id
 * @key: key to retrieve
 *
 * Return: address of value or Null
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index = 0;

	if (ht == NULL || key == NULL)
		return (NULL);
	index = key_index((const unsigned char *)key, ht->size);
	if (ht->array[index] == NULL)
		return (NULL);
	return ((ht->array[index])->value);
}
	
