#include <stdlib.h>
#include <stdio.h>
#include "search_algos.h"

/**
 * interpolation_search - do interpolation search
 * @array: list to be searched
 * @size: size of array
 * @value: to search in the array
 *
 * Return: return imdex of the value else -
 */

int interpolation_search(int *array, size_t size, int value)
{
	int low = 0;
	size_t pos = -1;
	int high = size - 1;

	if (array == NULL)
		return (pos);
	while (1)
	{
		if (low == high)
			return (-1);
		if (array[low] == array[high])
			return (-1);
		if (pos >= size)
		{
			printf("Value checked array[%zu] is out of range\n",
					pos);
			return (-1);
		}

		pos = low + (((double)(high - low) / (array[high] -
					array[low])) * (value - array[low]));
		printf("Value checked array[%zu] = [%d]\n", pos, array[pos]);
		if (array[pos] == value)
			return (pos);
		if (array[pos] < value)
			low = pos + 1;
		if (array[pos] > value)
			high = pos - 1;
		if (pos <= 0)
			return (-1);
	}
}
