#include "main.h"


/**
 * puts_half - print second half of a string
 * @str - full string
 * Return - just void
 */


void puts_half(char *str)
{
	int i;

	for (i = 0; str[i] != '\n'; ++i)
		;
	i = i / 2;

	for (; str[i] != '\n'; ++i)
		_putchar(str[i]);
	_putchar('\n');
}


