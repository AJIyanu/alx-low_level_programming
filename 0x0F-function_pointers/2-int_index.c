#include <stdlib.h>
#include "function_pointers.h"

/**
 * int_index - which of the element in the array conforms
 * @array: list to check and confirm
 * @size: size of the array
 * @cmp: function to compare
 *
 * Return: index of where number matches
 */


int int_index(int *array, int size, int (*cmp)(int))
{
	int i;
	int index = 0;

	if (array == NULL || size <= 0 || cmp == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		index = cmp(array[i]);
		if (index == 1)
			return (i);
	}
	return (-1);
}
