#include <stdio.h>

/*
 * This function prints all digits
 * except 4 and 2
 */

/**
 * print_most_numbers - the code
 * Return: void
 */

void print_most_numbers(void)
{
	int c;

	for (c = '0'; c <= '9'; c++)
	{
		if (c != '2' && c != '4')
			putchar(c);
	}

	putchar('\n');
}
