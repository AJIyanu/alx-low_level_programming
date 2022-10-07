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
	int i = 0;
	int j = 0;

	while (array[i] < value)
	{
		printf("Value checked array[%d] = [%d]", i, array[i]);
		i += sq;
	}

	printf("Value found between indexes [%d] and [%d]", i - sq, i);
	j = i - sq;

	while (j < i)
	{
		printf("Value checked array[%d] = [%d]", j, array[j])
		if (array[j] == value)
			return (j);
		j++;
	}
	if (array[j] == value)
		return (j);
	return (-1);
}
