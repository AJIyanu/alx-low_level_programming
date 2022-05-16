#include <stdlib.h>
#include <stdio.h>
//#include "shell.h"

/**
 * strtok - get string and put them in array
 * @addr: the address of string
 *
 * Return: the address of the array
 */

int strtok(char *addr)
{
	int i = 0;
	int j = 0;
	int c = 0;

	while(addr[i] != '\0')
	{
		if (addr[i] == ' ' && addr[i + 1] !=  ' ')
			j++;
		i++;
	}
	j += 2;
	i = 0;
	while (addr[i] != '\0')
	{
		if (addr[i] != ' ')
			c++;
	}

	return (c + j);
}

int main(void)
{
	int i = 0;
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
	i = strtok(str);
	printf("I got %d words to be created\n%s\n", i, str);
	free(str);

	return (0);
}
