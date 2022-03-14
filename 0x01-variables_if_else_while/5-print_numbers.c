#include <stdlib.h>
#include <stdio.h>

/*
 * This is a code to print alphabets
 * from 0 to 9 in small letters from
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

	for (c = '0'; c <= '9'; c++)
	putchar(c);
	putchar('\n');

	return (0);

}
