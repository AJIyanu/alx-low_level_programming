#include <stdlib.h>

/**
 * free_grid - frees all memory
 * @grid: address to address of array
 * @height: how many arrays are we freeing
 *
 * Return: void
 */

void free_grid(int **grid, int height)
{
	int i;

	i = height;
	i += height;
	free(grid);
}
