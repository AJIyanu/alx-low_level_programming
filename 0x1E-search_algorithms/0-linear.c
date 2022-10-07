#include <stdlib.h>
#include <stdio.h>
#include "search_algos.h"

/**
 * linear_search - search for a data linearly
 * @array: array to be searched
 * @size: size of the array to be search
 * @value: value to be searched
 *
 * Return: index of the searched value
 */

int linear_search(int *array, size_t size, int value)
{
	size_t i = 0;

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
