#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_strings - prints numbers with a given separator
 * @separator: what separates numbers
 * @n: numbers of integers passed
 *
 * Return: nothing just print
 */


void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *word;

	va_list str;

	va_start(str, n);

	for (i = 0; i < n; i++)
	{
		word = va_arg(str, char *);
		if (word == NULL)
			printf("(nil)");
		else
			printf("%s", word);
		if (i + 1 != n && separator != NULL)
			printf("%s", separator);
	}
	va_end(str);
	printf("\n");
}
