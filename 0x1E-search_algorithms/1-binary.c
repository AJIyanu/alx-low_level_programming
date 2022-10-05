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
    int i = 0;
    int mid = (size - i) / 2;
    int found = -1;

    if (array[mid] == value)
        return (mid);
    else if (array[mid] > value)
    {
        size = mid;
        found = binary_search(array, size, value);
    }
    else
        found = binary_search(array[i], size, value);
    return (found);
}
