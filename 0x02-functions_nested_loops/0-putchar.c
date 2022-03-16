#include <stdio.h>
#include <stdlib.h>

/*
 * I am not allowed to use printf
 * or any other function but putchar
 * This programme however must print
 * _putchar
 */



/**
 * main - this is where the code goes
 * Return: void
 */

int main(void)
{
	char str[8] = "_putchar";
	int i = 0;

	for (i = 0; i < 8; i++)
	{

		putchar(str[i]);

	}

	putchar('\n');

	return (0);




}
