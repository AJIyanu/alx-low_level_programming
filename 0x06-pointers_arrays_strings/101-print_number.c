#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * print_number - print number in char
 * @n: Number to be printed
 *
 * Return: no shit
 */

void print_number(int n)
{
	int mod;

	if (n < 0)
	{
		putchar('-');
		n *= -1;
	}
	mod = n % 10;

	if (n < 10)
		putchar(n + 48);
	else
	{
		print_number(n / 10);
		putchar(mod + 48);
	}
}
