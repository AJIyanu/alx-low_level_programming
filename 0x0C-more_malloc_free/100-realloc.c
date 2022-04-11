#include <stdlib.h>

/**
 * realloc - creates new sets of memories
 * @old_size: explanatory
 * @new_size: same
 * @ptr: pointer to it
 *
 * Return: pointer
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	int i;
	int j;
	char *ptr2;

	if (old_size == new_size)
		return (ptr);
	if (ptr == NULL && new_size == 0)
	{
		free(ptr);
		return (NULL);
	}

