#include <stdio.h>
#include "main.h"

/**
 * _strstr - finds the first occurence of substring
 * @haystack: full string
 * @needle: sub string
 *
 * Return: pointer to first occurence. otherwise NULL
 */

char *_strstr(char *haystack, char *needle)
{
	int i;
	int j = 0;
	int c = 0;

	for (i = 0; needle[i] != '\0'; i++)
	{
		while (haystack[j] != '\0')
		{
			if (needle[i] == haystack[j])
			{
				c++;
				break;
			}
			else if (haystack[j] == '\0')
			{
				c = 0;
				j = 0;
			}
			else
				j++;
		}
	}
	j++;
	if (c == i)
		return (&haystack[j - c]);
	else
		return (NULL);
}
