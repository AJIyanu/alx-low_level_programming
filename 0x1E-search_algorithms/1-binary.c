#include <stdlib.h>
#include <stdio.h>
#include "search_algos.h"

/**
 * binary_search - search for a data linearly
 * @array: array to be searched
 * @size: size of the array to be search
 * @value: value to be searched
 *
 * Return: index of the searched value
 */

int binary_search(int *array, size_t size, int value)
{
	size_t i = 0;
	size_t j;
	int mid, mod;
	int debug = 0;

	while (i < size)
	{
		printf("Searching in array: ");
		debug++;
		j = i;
		while (j < size)
		{
			printf("%d", array[j]);
			if (j == (size - 1))
				printf("\n");
			else
				printf(", ");
			j++;
		}
		mid = (size - i) / 2;
		mod = (size - i) % 2;
		if (array[mid - 1 + i + mod] == value)
			return (mid - 1 + i + mod);
		if (array[mid - 1 + i + mod] > value)
			size = mid - 1 + i + mod;
		else
			i = mid + i + mod;
		if (debug == 5 || mid == 0)
			break;
	}
	return (-1);
}
