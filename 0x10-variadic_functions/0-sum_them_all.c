#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - sums the arguement passed
 * @n: number if arguements
 *
 * Return: result
 */

int sum_them_all(const unsigned int n, ...)
{
	if (n == 0)
		return (0);
	

	int i;
	int sum = 0;
	va_list args;

	va_start(args, n);

	for (i = 0; i < n; i++)
		sum += va_arg(args, int);
	va_end(args);

	return (sum);
}
