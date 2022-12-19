#include <stdlib.h>
#include <string.h>
#include "hash_tables.h"

/**
 * hash_table_set - creates node and adds to table
 * @ht: table address
 * @key: key cannot be emoty
 * @value: value maybe empty
 *
 * Return: 1 on success 0 otherwise
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *node = NULL;
	unsigned long int index = 0;

	if (key == NULL || *key == '\0')
		return (1);
	node = malloc(sizeof(hash_node_t));
	if (node == NULL)
		return (0);
	node->key = malloc(strlen(key) + 1);
	strcpy(node->key, key);
	node->value = malloc(strlen(value) + 1);
	strcpy(node->value, value);
	index = key_index((const unsigned char *)key, ht->size);
	if (ht->array[index] == NULL)
		ht->array[index] = node;
	else
	{
		node->next = ht->array[index];
		ht->array[index] = node;
	}
	return (1);
}

