#include <stdio.h>
#include "main.h"

/*
 * Thiz function prints last digit
 */

/**
 * print_last_digit - real code
 * @c: input value
 * Return: returns last digit c
 */

int print_last_digit(int c)
{
	if (c < 0)
	{
		c = c % 10;
		c = -c;
	}
	c = c % 10;
	_putchar(c + '0');

	return (c);
}
