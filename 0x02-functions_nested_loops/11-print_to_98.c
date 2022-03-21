#include <stdio.h>

/*
 * printing numbers back and forth to 98
 */

/**
 * print_to_98 - print
 * @n: from where do we print?
 *
 * Return: void
 */

void print_to_98(int n)
{
	if (n > 98)
	{
		while (n > 98)
		{
			printf("%d, ", n);
			n--;
		}
	}
	else
	{
		while (n < 98)
		{
			printf("%d, ", n);
			n++;
		}
	}
	n = 98;
	printf("%d\n", n);
}

