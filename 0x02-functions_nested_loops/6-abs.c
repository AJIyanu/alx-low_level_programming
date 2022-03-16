#include <stdio.h>

/*
 * This function prints absolute value
 */

/**
 * _absv - code
 * @c: this is the input number
 * Return: the posstive value
 */

int _absv(int c)
{
	if (c < 0)
	{
		c = c * -1;
		return (c);
	}
	else
		return (c);
}
