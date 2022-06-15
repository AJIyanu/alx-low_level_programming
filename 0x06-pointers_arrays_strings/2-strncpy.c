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
	int o = 0;

	while (o < n && src[o] != '\0')
	{
		dest[o] = src[o];
		o++;
	}
	dest[o] = '\0';


	return (dest);
}
