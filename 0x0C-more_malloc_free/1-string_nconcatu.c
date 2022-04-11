#include "main.h"
#include <stdlib.h>

/**
  * string_nconcat - ...
  * @s1: ...
  * @s2: ...
  * @n: ...
  *
  * Return: ...
  */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i = 0, j = 0, k = 0, l = 0;
	char *str;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[i])
		i++;
	printf("%d = s1length\n", i);

	while (s2[k])
		k++;
	printf("%d = s2len\n", k);

	if (n >= k)
		l = i + k;
	else
		l = i + n;
	printf("%lu bytes will be created\n", sizeof(char) * l + 1);

	str = malloc(sizeof(char) * l + 1);
	if (str == NULL)
		return (NULL);

	k = 0;
	while (j < l)
	{
		if (j <= i)
			str[j] = s1[j];

		if (j >= i)
		{
			str[j] = s2[k];
			k++;
		}
		putchar(str[j]);
		j++;
	}
	putchar('\n');
	str[j] = '\0';
	return (str);
}
