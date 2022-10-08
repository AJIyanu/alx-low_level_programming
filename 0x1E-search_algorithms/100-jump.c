#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include "search_algos.h"

/**
 * jump_search - do a jump search on sorted list
 * @array: array to search
 * @size: size of it
 * @value: value to find
 *
 * Return: the index otherwise -1
 */

int jump_search(int *array, size_t size, int value)
{
	int sq = sqrt(size);
	size_t i = 0;
	size_t j = size;

	if (array == NULL)
		return (-1);
	while (array[i] < value && i < size)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		i += sq;
	}

	if (i == 0)
		return(-1);
	printf("Value found between indexes [%lu] and [%lu]\n", i - sq, i);
	j = i - sq;

	while (j <= i && j < size)
	{
		printf("Value checked array[%lu] = [%d]\n", j, array[j]);
		if (array[j] == value)
			return (j);
		j++;
	}
	if (array[j] == value)
		return (j);
	return (-1);
}
