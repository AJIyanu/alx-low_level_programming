#include <stdio.h>

/**
 * _strncat - combines two strings together
 * @dest: second string
 * @src: first string
 * @n: length
 *
 * Return: a pointer to the resulting destination
 */


char *_strncat(char *dest, char *src, int n)
{
	int r;
	int o;

	for (r = 0; dest[r] != '\0'; r++)
		;

	for (o = 0; o < n; o++)
	{
		if (src[o] != '\0');
		{
			dest[r] = src[o];
			r++;
		}
	}

	return (dest);
}
