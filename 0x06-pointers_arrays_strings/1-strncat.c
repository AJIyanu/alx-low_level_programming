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
	int o = 0;

	for (r = 0; dest[r] != '\0'; r++)
		;
	while (o < n && src[o] != '\0')
	{
		dest[r] = src[o];
		r++;
		o++;
	}
	dest[r] = '\0';

	return (dest);
}
