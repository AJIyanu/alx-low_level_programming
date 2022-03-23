#include "main.h"

/**
 * _puts - print to standard ouput
 * @str: string data to be printed
 * Return: void
 */


void _puts(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i + 2)
		_putchar(str[i]);
	_putchar('\n');
}
