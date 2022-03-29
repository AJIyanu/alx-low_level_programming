#include <stdio.h>
#include "main.h"

/**
 * _strpbrk - finds the first occurence of any of the word
 * @s: string to check
 * @accept: string to check with
 *
 * Return: pointer to the string.
 */

char *_strpbrk(char *s, char *accept)
{
	int i;
	int j;
	
	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
				break;
		}
		if (accept[j] != '\0')
			break;
	}
	if (s[i] == '\0')
		return (NULL);
	else
		return (&s[i]);
}
