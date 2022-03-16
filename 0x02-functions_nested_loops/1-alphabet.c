#include "putchar.h"
#include <stdio.h>
#include <stdlib.h>

/*
 * This program prints a-z
 */

/**
 * print_alphabet - code  here
 * Return: void
 */

void print_alphabet(void)
{
	int i;
	for (i = 'a'; i <= 'z'; i++)
		_putchar(i);

	_putchar('\n');
	return;
}

/**
 * main - call in function
 * Return: void
 /

int main(void)
{
	print_alphabet();
	return (0);
}
*/
