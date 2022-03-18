#include <stdio.h>

/*
 * This function is for printing
 * triangle
 */

/**
 * print_triangle - main code here
 * @size: height of the triangle
 * Return: how about a void
 */

void print_triangle(int size)
{
	int row;
	int column;
	int space;

	if (size > 0)
	{
		for (row = 1; row <= size; row++)
		{
			space = size - row;

			for (column = 0; column < space; column++)
				putchar(' ');
			for (column = 0; column < row; column++)
				putchar('#');
			putchar('\n');
		}
	}
	else
		putchar('\n');
}
