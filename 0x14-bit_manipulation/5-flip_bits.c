#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * flip_bits - what has changed
 * @n: num 1
 * @m: num2
 *
 * Return: number of changed bit
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int l = 0;
	int i = 0;

	l = m ^ n;

	while (l > 1)
	{
		l = l >> 1;
		if ((l & 1) == 1)
			i++;
	}

	if (l == 1)
		return (i + 1);
	else
		return (i);
}
