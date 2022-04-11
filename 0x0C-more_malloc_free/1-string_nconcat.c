#include <stdlib.h>

/**
 * _strlen - check the length of a string
 * @s: string
 * Return: length
 */

int _strlen(char *s)
{
	int l;


	for (l = 0; s[l] != '\0'; ++l)
		;

	return (l);
}

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
		putchar(dest[i]);
		i++;
	}
	putchar('\n');
	return (dest);
}

/**
 * string_nconcat - combines two strings together. Not all though
 * @s1: first string
 * @s2: second string
 * @n: how many characters from the second string
 *
 * Return: pointer to newly allocated memory
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int sl;
	unsigned int sl2;
	int msz;
	char *ptr;

	if (s1 == NULL)
		sl = 0;
	else
		sl = _strlen(s1);
	printf("%d s1len\n", sl);
	if (s2 == NULL)
		sl2 = 0;
	else
		sl2 = _strlen(s2);
	printf("%d s2len\n", sl2);

	if (sl2 < n)
		n = sl2;
	n++;
	msz = sl + n;
	printf("%lu bytes is created\n", sizeof(char) * msz);
	ptr = malloc(msz * sizeof(char));
	if (ptr == NULL)
		return (NULL);

	if (sl != 0)
		_strcpy(ptr, s1);
	if (sl2 != 0)
		_strcpy((ptr + sl), s2);
	ptr[msz - 1] = '\0';

	return (ptr);
}
