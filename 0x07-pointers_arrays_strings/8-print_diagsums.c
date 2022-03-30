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
	int i = 0;
	int j = size;
	int sum = a[i];


	while (i < size - 1)
	{
		i++;
		sum = sum + a[i + j];
		j = j + size;
	}
	printf("%d, ", sum);

	i = 0;
	sum = 0;
	j = size - 1;


	while (i < size)
	{
		sum = sum + a[j - i];
		j = j + size;
		i++;
	}
	printf("%d\n", sum);
}

