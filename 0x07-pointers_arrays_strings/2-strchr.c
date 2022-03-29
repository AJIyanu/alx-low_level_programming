#include "main.h"
#include <stdlib.h>

/**
 * _strchr - locates a string
 * @s: string base address
 * @c: character to be located
 *
 * Return: returns address to the string and NULL if not present
 */

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
		{
			break;
		}
	}
	if (s[i] == '\0')
		return (NULL);
	else
		return (&s[i]);
}


