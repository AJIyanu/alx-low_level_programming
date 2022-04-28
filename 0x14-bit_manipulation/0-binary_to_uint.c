#include "main.h"

/**
 * binary_to_unit - converts binary to unsigned int
 * @b: array of binary characters
 * Return: integer not signed
 */

unsigned int binary_to_unit(const char *b)
{
	int i = 0;
	int j = 0;
	unsigned int bin;

	if (b = NULL)
		return (zero);
	while (b[i] != '\0')
		i++;
	i--;

	while (i >= 0)
	{
		if (b[j] != 1 && b[j] != 0)
			return (0);
		if (b[j] == 1)
			bin += powtwo(i);
		i--;
		j++;
	}
	return (bin);
}
