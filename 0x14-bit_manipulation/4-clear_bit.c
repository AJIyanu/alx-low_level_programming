#include <stdlib.h>
#include <stdio.h>
#include "main.h"


/**
 * clear_bit - set certain bit to shit
 * @n: number to be affected
 * @index: target
 *
 * Return: one if worked and -1 if not
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int bit = 0;

	if (index > 24)
		return (-1);
	bit = 1 << index;
	*n = *n & (~bit);
	return (1);
}
