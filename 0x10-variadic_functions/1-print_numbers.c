#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_numbers - prints numbers with a given separator
 * @separator: what separates numbers
 * @n: numbers of integers passed
 *
 * Return: nothing just print
 */


void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;

	va_list nums;

	va_start(nums, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(nums, int));
		if (i + 1 != n)
			printf("%s", separator);
	}
	va_end(nums);
	printf("\n");
}
