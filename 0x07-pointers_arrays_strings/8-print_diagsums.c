#include <stdio.h>
#include "main.h"

/**
 * print_diagsums - prints the sum of numbers in the diagonal
 * @a: address of the string
 * @size: size to be printed
 *
 * Return: void
 */

void print_diagsums(int *a, int size)
{
	int i;
	int j;
	int sum = 0;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			if (i == j)
				sum += a[i][j];
		}
	}

	printf("%d, ", sum);

	size--;
	sum = 0;
	i = 0;
	j = size;

	while (i <= size && j >=0)
	{
		sum += a[i][j];
		i++;
		j--;
	}
}
