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
	int t;

	for (d = '0'; d <= '9'; d++)
	{

		for (g = '0'; g <= '9'; g++)
		{
			for (t = '0'; t <= '9'; t++)
			{
				if (d < g && g < t)
				{
					putchar(d);
					putchar(g);
					putchar(t);

					if (d != '7')
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}

	}
	putchar('\n');
	return (0);
}
