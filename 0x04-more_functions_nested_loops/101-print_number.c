#include <stdio.h>

/*
 * This function uses putchar to
 * print number of long values gan
 */

/**
 * print_number - main code here
 * @n: collect number for me jare
 * Return: void
 */


void print_number(int n)
{
	if (n < 0)
	{
		putchar('-');
		n = -n;
	}

	if (n / 10)
		print_number(n / 10);

	putchar((n % 10) + '0');
}
