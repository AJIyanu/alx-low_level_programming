#include <stdio.h>

/*
 * This is a square function
 */

/**
 * print_square - main code here
 * @size: how big do you want it?
 * Return: void
 */

void print_square(int size)
{
	int row;
	int column;

	if (size > 0)
	{
		for (row = 0; row < size; row++)
		{
			for (column = 0; column < size; column++)
				putchar('#');
			putchar('\n');
		}
	}
	else
		putchar('\n');
}
