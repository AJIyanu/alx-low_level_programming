#include <stdlib.h>
#include <stdio.h>

/*
 * This is going to print the comnination of
 * two numbers so that none of them is repeated.
 * okay lets go
 */

/**
 * main - this is thd main
 * Return: void
 */

int main(void)
{

	int d;
	int g;

	for (d = 0; d < 100; d++)
	{
		for (g = 0; g < 100; g++)
		{
			if (d < g)
			{
				putchar(d / 10 + 48);
				putchar(d % 10 + 48);
				putchar(' ');
				putchar(g / 10 + 48);
				putchar(g % 10 + 48);
				if (d != 98)
				{
					putchar(44);
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
