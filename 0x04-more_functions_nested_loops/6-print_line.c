#include <stdio.h>

/*
 * This code draws a straight line
 * kowe
 */

/**
 * print_line - code
 * @n: length
 * Return: void
 */

void print_line(int n)
{
	int l;

	if (n > 0)
	{
		for (l = 0; l < n; l++)
			putchar('_');
	}

	putchar('\n');
}

