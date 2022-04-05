#include <stdlib.h>

/**
 * **alloc_grid - I know this function is not hard, creating a multidimensional array with malloc
 * @width: how many byte in the array
 * @height: how many array of array
 *
 * Return: pointer go array otherwise null
 */


int **alloc_grid(int width, int height)
{
	int i;
	int j;
	int **ptr;

	if (width == 0 || height == 0)
		return (NULL);
	ptr = (int **)malloc(height * sizeof(int *));
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		*(ptr + i) = (int *)malloc(width * sizeof(int));
		if (ptr[i] == NULL)
			return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
			ptr[i][j] = 0;
	}
	return (ptr);
}
