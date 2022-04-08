#include <stdlib.h>

/**
 * array_range - sets memory for certain range
 * @min: starting from here
 * @max: ends here
 *
 * Return: pointer
 */

int *array_range(int min, int max)
{
	int size;
	int i = 0;
	int *ptr;

	if (min > max)
		return (NULL);

	size = max - min;
	size++;

	ptr = malloc(sizeof *ptr * size);

	while (i < size)
	{
		ptr[i] = min;
		min++;
		i++;
	}

	return (ptr);
}

