#include "main.h"

/**
 * _puts2 - print to standard ouput
 * @str: string data to be printed
 * Return: void
 */


void _puts2(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i = i + 2)
		_putchar(str[i]);
	_putchar('\n');
}
