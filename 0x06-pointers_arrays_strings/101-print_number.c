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
	if (n < 10)
		putchar(n + 48);
	print_number(n / 10);
	putchar(n % 10 + 48

}
