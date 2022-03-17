#include <stdio.h>

/*
 * Prints 1-14 ten times
 */

/**
 * more_numbers - code
 * Return: void
 */

void more_numbers(void)
{
	int c;
	int d;

	for (c = 0; c <= 10; c++)
	{
		for (d = 0; d < 15; d++)
		{
			if (d > 9)
				putchar(d=d+'0');
			else
				putchar(d);
			putchar('\n');
		}
	}
}
