#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/*
 * This program prints a-z
 */

/**
 * main - code  here
 * Return: void
 */

void print_alphabet(void)
{
	int i;
	for (i = 'a'; i <= 'z'; i++)
		_putchar(i);

	_putchar('\n');
	return (0);


}
