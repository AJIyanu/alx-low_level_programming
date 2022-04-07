#include <stdlib.h>

/**
 * malloc_checked - creates memory in heap
 * @b: how much memory
 * Return: pointer
 */

void *malloc_checked(unsigned int b)
{
	char *c = malloc(b);

	if (c == NULL)
		exit(98);
	else
		return (c);
}
