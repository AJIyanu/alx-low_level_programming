#include <stdio.h>

/**
 * _strncpy - combines two strings together
 * @dest: second string
 * @src: first string
 * @n: length
 *
 * Return: a pointer to the resulting destination
 */


char *_strncpy(char *dest, char *src, int n)
{
	int o;


	for (o = 0; o < n; o++)
	{
		dest[o] = src[o];
	}

	return (dest);
}
