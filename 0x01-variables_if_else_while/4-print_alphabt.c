#include <stdlib.h>
#include <stdio.h>

/*
 * This is a code to print alphabets
 * from a to z in small letters from
 * the ascii value. we are going to
 * run an loop
 */


/**
 * main - this is where the code goes
 * Return: void
 */

int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
		if (c != 'e')
			if (c != 'q')
				putchar(c);

	putchar('\n');

	return (0);

}
