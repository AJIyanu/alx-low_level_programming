#include <stdlib.h>
#include <stdio.h>

/*
 * This function checks for lower
 * case letters and returns 1
 * otherwise return 0
 */

/**
 * _is_lower - main code
 * @c: this is the input
 * Return: 1 otherwise 0
 */

int _is_lower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
