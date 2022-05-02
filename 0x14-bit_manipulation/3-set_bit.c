#include <stdlib.h>
#include <stdio.h>
#include "main.h"

unsigned long int powtwo(unsigned int p);

/**
 * set_bit - set certain bit to shit
 * @n: number to be affected
 * @index: target
 *
 * Return: one if worked and -1 if not
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int long bit = 0;

	if (index > 24)
		return (-1);
	bit = powtwo(index);
	*n = *n | bit;
	return (1);
}

/**
 * powtwo - does the of two rexursively
 * @p: what power
 * Return: result
 */

unsigned long int powtwo(unsigned int p)
{
	if (p == 0)
		return (1);
	if (p > 1)
		return (2 * powtwo(p - 1));
	return (2);
}
