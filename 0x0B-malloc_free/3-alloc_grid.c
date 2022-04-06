#include <stdlib.h>

/**
 * alloc_grid -	creating a multidimensional array with malloc
 * @width: how many byte in the array
 * @height: how many array of array
 *
 * Return: pointer go array otherwise null
 */


int **alloc_grid(int width, int height)
{
	int i;
	int j;
	int **array;
	int *ptr;

	if (width == 0 || height == 0)
		return (NULL);
	i = height * sizeof(int *) + width * height * sizeof(int);
	array = (int **)malloc(i);
	if (array == NULL)
		return (NULL);
	ptr = (int *)(array + height);
	for (i = 0; i < height; i++)
		array[i] = (ptr + width * i);
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
			array[i][j] = 0;
	}
	return (array);
}
