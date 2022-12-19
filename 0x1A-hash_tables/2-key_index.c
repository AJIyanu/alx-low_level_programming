#include <stdlib.h>
#include "hash_tables.h"

/**
 * key_index - computes key
 * @key: to be computed
 * @size: table size
 *
 * Return: key index value
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
