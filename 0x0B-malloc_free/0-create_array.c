#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - creats the array and initalizes with a specific character
 * @size: what size of araay do we need
 * @c: initializig character
 *
 * Return: pointer to the array and NUlL if failed
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *ptr;

	if (size == 0)
		return (NULL);

	ptr = (char *)malloc(size * sizeof(char));

	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		*(ptr + i) = c;
	return (ptr);
}
