#include <stdio.h>
#include <stdlib.h>

/**
 * print_binary - convert to binary rexursively
 * @n: number to be converted
 * Return: no shit
 */

void print_binary(unsigned long int n)
{
	if (n > 1)
		print_binary(n >> 1);

	putchar((n & 1) + 48);
}
