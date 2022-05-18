#include <stdlib.h>
#include <stdio.h>
//#include "shell.h"

/**
 * _strtok - get string and put them in array
 * @addr: the address of string
 * @num: numbers of word address
 *
 * Return: the address of the array
 */

char *_strtok(char *addr, int *num)
{
	int i = 0;
	int j = 0;
	int c = 0;
	char *ptr = addr;

	for (i = 0; addr[i] == ' '; i++)
		ptr++;
	i = 0;

	while (ptr[i] != '\0')
	{
		if (ptr[i] == ' ' && ptr[i + 1] !=  ' ')
			j++;
		i++;
	}
	*num = j + 2;
	i = 0;
	while (ptr[i] != '\0')
	{
		if (ptr[i] != ' ')
			c++;
		i++;
	}
	ptr = malloc((c + j) * sizeof(char));
	if (ptr == NULL)
	{
		perror("malloc Error\n");
		exit(1);
	}

	return (ptr);
}

/**
 * _strcopy - copy the strings into newly allocated mem
 * @src: address of source string
 * @dest: address of destination
 * @starr: address of ptr to string array
 *
 * Return: address to array
 */

char **_strcopy(char *src, char *dest, int starr)
{
	int i = 0;
	int j = 0;
	int k = 1;
	char **ptr = NULL;

	ptr = malloc(starr * sizeof(char *));
	if (ptr == NULL)
		exit(1);
	
	while (src[i] == ' ')
		i++;
	ptr = &dest;
	while (src[i] != '\0')
	{
		printf("working on '%c';", src[i]); 
		if (src[i] != ' ')
		{
			dest[j] = src[i];
			printf("'%c' was saved\n", dest[j]);
			i++;
			j++;
		}
		else if (src[i] == ' ' && src[i + 1] != ' ')
		{
			dest[j] = '\0';
			j++;
			ptr[k] = &dest[j];
			k++;
			printf("'%c' follows the space\n", src[i + 1]);
			i++;
		}
		else
			i++;
	}
	printf("got %c, looping finished\n", src[i]);
	ptr[k] = NULL;
	for (k = 0; k < starr; k++)
		printf("%s\n", ptr[k]);

	free(ptr);

	return (ptr);
}

int main(void)
{
	int i = 0;
	char *ptr = NULL;
	char *str;
	size_t bufsize = 32;

	str = malloc(bufsize * sizeof(char));
	if (str == NULL)
	{
		perror("No space for malloc");
		exit(1);
	}
	else
		printf("Done!\n");
	printf("AJIshell $ ");
	getline(&str, &bufsize, stdin);
	ptr = _strtok(str, &i);
	printf("I have created this address %p for %d numbers of words\n%s", ptr, i, str);
	_strcopy(str, ptr, i);
	free(str);
	free(ptr);

	return (0);
}
