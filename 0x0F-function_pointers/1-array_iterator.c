#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"

/**
 * array_iterator - iterates through array
 * @array: created array of data
 * @size: size of the array created
 * @action: function to pointer
 *
 * Return: nothing just acts
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (size < 1 || array == NULL || action == NULL)
		return;
	for (i = 0; i < size; i++)
		action(array[i]);
}
