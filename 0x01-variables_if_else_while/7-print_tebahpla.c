#include <stdlib.h>
#include <stdio.h>

/*fc
 * This code is going to print from
 * z - a lower case
 */

/**
 * main - This where all codes go
 * Return: void
 */

int main(void)
{
	char za;
	for (za = 'z'; za >= 'a'; za--)
		putchar(za);

		putchar('\n');
		return (0);
 }
