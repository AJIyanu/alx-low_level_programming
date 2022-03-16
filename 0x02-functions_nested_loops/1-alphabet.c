#include <stdio.h>
#include <stdlib.h>

/*
 * This program prints a-z
 */

/**
 * prnt_alphabet - code  here
 * Return: void
 */

void prnt_alphabet(void)
{
	int i;

	for (i = 'a'; i <= 'z'; i++)
		putchar(i);
}
