
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *



 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

void print_alphabet(void)
{
        int i;
        for (i = 'a'; i <= 'z'; i++)
                putchar(i);

        putchar('\n');
        return;
}


void print_alphabet_x10(void)
{
	int a;
	
	for (a = 0; a < 10; a++)
	{
		print_alphabet();

	}
}
