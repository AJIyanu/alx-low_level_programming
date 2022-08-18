#include <stdlib.h>

/*
 * This code checks for upper case
 * alphabets and returns 1 if true,
 * returns 0 if otherwise.
 */

/**
 * _isupper - code checker
 * @c: receives alpha to check
 * Return: 1 if true and 0 otherwise
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
