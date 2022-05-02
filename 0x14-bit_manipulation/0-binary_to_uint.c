#include "main.h"
#include <stdlib.h>
#include "main.h"
#include <stdio.h>
/**
 * powtwo - does the of two rexursively
 * @p: what power
 * Return: result
 */

unsigned int powtwo(unsigned int p)
{
	if (p == 0)
		return (1);
	if (p > 1)
		return (2 * powtwo(p - 1));
	else
		return (2);
}

/**
 * binary_to_uint - converts binary to unsigned int
 * @b: array of binary characters
 * Return: integer not signed
 */

unsigned int binary_to_uint(const char *b)
{
	int i = 0;
	int j = 0;
	unsigned int bin = 0;

	if (b == NULL)
		return (0);
	while (b[i] != '\0')
		i++;
	i--;

	while (i >= 0)
	{
		if (b[j] != '1' && b[j] != '0')
			return (0);
		if (b[j] == '1')
			bin += powtwo(i);
		i--;
		j++;
	}
	return (bin);
}
