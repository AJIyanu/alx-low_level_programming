#include "main.h"


/**
 * puts_half - print second half of a string
 * @str:  full string
 * Return - just void
 */


void puts_half(char *str)
{
	int i;
	int max;

	for (i = 0; str[i] != '\0'; ++i)
		;
	max = i - 1;
	i = i / 2;

	while (i <= max)
		_putchar(str[i]);
	_putchar('\n');


}


