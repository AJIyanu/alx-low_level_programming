#include <stdio.h>

/**
 * _strcat - combines two strings together
 * @dest: second string
 * @src: first string
 *
 * Return: a pointer to the resulting destination
 */


char *_strcat(char *dest, char *src)
{
	int r;
	int o;

	for (r = 0; dest[r] != '\0'; r++)
		;

	for (o = 0; src[o] != '\0'; o++)
	{
		dest[r] = src[o];
		r++;
	}

	dest[r] = '\0';

	return (dest);
}
