#include <stdlib.h>
#include <string.h>

/**
 * argstostr - converts arguement to string
 * @ac: numbers of array array
 * @av: pointer to pointer of arrays
 *
 * Return: pointer to the new array...
 */


char *argstostr(int ac, char **av)
{
	int len;
	int slen = 0;
	int l = 0;
	int i;
	int j;
	char *ptr;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		slen += 1;
		len = strlen(av[i]);
		slen = slen + len;
	}
	slen += 1;
	ptr = (char *)malloc(slen * sizeof(char));
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			ptr[l] = av[i][j];
			l++;
		}
		ptr[l] = '\n';
		l++;
	}
	*(ptr + l) = '\0';
	return (ptr);
}
