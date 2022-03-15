#include <stdlib.h>
#include <stdio.h>

/* This is going to print the comnination of
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

	for (d = '0'; d<= '9'; d++)
	{

		for (g = '0'; g <= '9'; g++)
		{
			if (d != g && d < g)
			{
				putchar(d);
				putchar(g);

				if (d != '8')
				{
					putchar(',');
					putchar(' ');
				}
			}
		}

	}
	putchar('\n');
	return (0);
	



}
