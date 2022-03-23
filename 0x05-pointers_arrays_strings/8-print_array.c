include "main.h"

/**
 * print_array - Prints what is stored in an array
 * @a: pointer to the array
 * @n: how many is printed
 * Return: nothing
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i <= n && a[i] != '\0'; i++)
	{
		if (i != n)
			printf("%c, ", a[i]);
		else
			printf("%c\n", a[i]);
	}
}
