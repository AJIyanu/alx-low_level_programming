#include <stdio.h>
#include <stdlib.h>

/**
 * _strcpy - copies a source string to destination
 * @dest: destination
 * @src: source
 *
 * Return: destination pointer
 */


char *_strcpy(char *dest, char *src)
{
	int i;

	i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';

	return (dest);
}

/**
 * wordlen - counts how many characters in a word
 * @loc: location of the word to be counted
 * Return: number of characters counted
 */

int wordlen(char *loc)
{
	int i = 0;

	while (loc[i] != 32 && loc[i] != '\n' && loc[i] != '\t')
		i++;
	return (i);
}

/**
 * countWords - Counts the numbers of words in a string
 * @str: address of the string
 * Return: The numbers of string encountered
 */

unsigned int countWords(char *str)
{
	int state = 0;
	unsigned int wc = 0;

	while (*str)
	{
		if (*str == ' ' || *str == '\n' || *str == '\t')
			state = 0;

		else if (state == 0)
		{
			state = 1;
			++wc;
		}

		++str;
	}

	return (wc);
}

/**
 * strtow - breaks string into array of arrays
 * @str: address of the string
 * Return: pointer to pointer of broken strings
 */

char **strtow(char *str)
{
	int wc; /* word count */
	int sc; /* scans through all characters */
	int wl; /* word length */
	int arc; /* array counter - move to next memory */
	char **arr;

	wc = countWords(str);
	arr = (char **)malloc(wc * sizeof(char *));
	if (arr == NULL)
		return (NULL);

	for (sc = 0; str[sc] != '\0'; sc++)
	{
		if (str[sc] != 32 && str[sc] != '\n' && str[sc] != '\t')
		{
			wl = wordlen(str + sc);
			arr[arc] = (char *)malloc(wl * sizeof(char));
			_strcpy(&arr[arc][0], &str[sc]);
			arr[arc][wl] = '\0';
			arc++;
			sc = sc + wl - 1;
		}
	}
	return (arr);
}
