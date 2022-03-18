#include <stdio.h>

/*
 * This function is going to print
 * diagonal line with \ and that
 * will be all
 */

/**
 * print_diagonal - code here
 * @n: number of diagonnals to print
 * Return: void
 */

void print_diagonal(int n)
{
	int l;
	int space;

	if (n > 0)
	{
		for (l = 0; l < n; l++)
		{
			for (space = 0; space < l; space++)
				putchar(' ');
			putchar(92);
			putchar('\n');
		}
	}
	else
		putchar('\n');
}
