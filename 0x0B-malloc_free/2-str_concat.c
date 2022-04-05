#include <stdlib.h>
/**
 * str_concat - Concantenates two strings pre allocating memory
 * @s1: string no 1
 * @s2: string no 2
 *
 * Return: pointer to the string or null if impossible
 */

char *str_concat(char *s1, char *s2)
{
	int size1;
	int size2;
	int i;
	int ss2 = 0;
	char *ptr;

	if (s1 == NULL)
	{
		s1 = (char *)malloc(1);
		*s1 = '\0';
	}
	if (s2 == NULL)
	{
		s2 = (char *)malloc(1);
		*s2 = '\0';
	}
	for (size1 = 0; s1[size1] != '\0'; size1++)
		;
	for (size2 = 0; s2[size2] != '\0'; size2++)
		;
	size1 = size1 + size2 + 1;
	ptr = (char *)malloc(size1 * sizeof(char));
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < size1; i++)
	{
		if (s1[i] != '\0')
			ptr[i] = s1[i];
		else
			break;
	}
	for (; i < size1; i++)
	{
		if (ss2 <= size2)
			ptr[i] = s2[ss2];
		ss2++;
	}
	return (ptr);
}
