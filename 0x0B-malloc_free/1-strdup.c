#include <stdlib.h>

/**
 * _strdup - copies string to another location
 * @str: pointer to string to be copied
 * Return: pointer to the new string location
 */

char *_strdup(char *str)
{
	int i;
	int size;
	char *ptr;

	if (str == NULL)
		return (NULL);

	for (size = 0; str[size] != '\0'; size++)
		;
	
	ptr = (char *)malloc(size * (sizeof(char)));
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i <= size; i++)
		*(ptr + i) = *(str + i);

	return (ptr);
}
