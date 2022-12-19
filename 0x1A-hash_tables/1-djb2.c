#include <stdlib.h>
#include "hash_tables.h"

/**
 * hash_djb2 - hash function based on djb2 algorith
 * @str: the sring
 *
 * Return: key value
 */

unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hval = 5381;
	int s = 0;

	while (*str)
	{
		s = *str;
		hval = (hval << 5) + hval + s;
		str++;
	}
	return (hval);
}

