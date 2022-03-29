#include <stdio.h>
#include "main.h"

/**
 * _strspn - count match
 * @s: string to count
 * @accept: string to chexk with
 *
 * Return: nothing parsie
 */

unsigned int _strspn(char *s, char *accept)
{
	int i;
	int j;
	int c = 0;

	for (i = 0; s[i] != ' '; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (accept[j] == s[i])
				c++;
		}
	}
	return (c);
}

