#include <stdio.h>

/**
 * print_array - Prints what is stored in an array
 * @a: pointer to the array
 * @n: how many is printed
 * Return: nothing
 */

void print_array(int *a, int n)
{
	int i;

	if (n > 0)
	{
		for (i = 0; i < n && a[i] != '\0'; i++)
		{
			if (i != n - 1)
				printf("%d, ", a[i]);
			else
				printf("%d\n", a[i]);
		}
	}
	else
		putchar('\n');
}
