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

	if ((l & 1) == 1)
	{
		i++;
		printf("first bit is 1 so i++ = %d\n", i);
	}
	else
		printf("first bit aint 1 so we move\n");

	while (l > 1)
	{
		l = l >> 1;
		if ((l & 1) == 1)
		{
			i++;
			printf("i got a 1, i++ = %d\n", i);
		}
		else
			printf("i got 0, i remains %d\n", i);
	}

	return (i);
}
