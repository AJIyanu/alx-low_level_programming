
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

int _putchar (char c);

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

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}

int _abs(int c)
{
	if (c < 0)
	{
		c = -1 * c;
		return (c);
	}
	else
		return (c);
}


int print_last_digit(int);

int _isalpha(int c);

int print_sign(int n);

void jack_bauer(void);

void times_table(void);

int add(int, int);

void print_to_98(int n);
