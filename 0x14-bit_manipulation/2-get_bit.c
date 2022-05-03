#include <stdio.h>
#include <stdlib.h>

/**
 * get_bit - convert to binary rexursively
 * @n: number to be converted
 * @index: which bit
 *
 * Return: no shit
 */


int get_bit(unsigned long int n, unsigned int index)
{
	int bit = (n & 1);

	if (n == 1 && index > 0)
		return (0);

	if (index > 64)
		return (-1);

	if (n > 1 && index > 0)
	{
		bit = get_bit(n >> 1, index - 1);
		return (bit);
	}
	return (bit);
}
