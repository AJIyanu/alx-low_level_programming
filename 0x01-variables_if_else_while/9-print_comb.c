#include <stdlib.h>
#include <stdio.h>

/*
 * This code is going to print from
 * 0 - 9 separated by a comma and whitespace
 */

/**
 * main - This where all codes go
 * Return: void
 */

int main(void)
{
	int za;

	for (za = '0'; za <= '9'; za++)
	{	putchar(za);

		if (za != '9')
		{	putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
