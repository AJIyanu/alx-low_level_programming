#include <stdio.h>
/*
 * This code is going to check for sign
 * of numbers, print their sign,
 * and return 1, 0 or -1 as indicated
 */

/**
 * print_sign - this is a function
 * @n: number to be checked
 * Return: 1 for positve and -1 negative
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}

	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}

	else
	{
		_putchar('-');
		return (-1);
	}
}


