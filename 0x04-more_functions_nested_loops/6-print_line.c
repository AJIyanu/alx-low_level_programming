#include <stdio.h>

/*
 * This code draws a straight line
 * kowe
 */

/**
 * print_line - code
 * Return: void
 */

void promt_line(int n)
{
	int l;
	
	for (l = 0; l < n; l++)
		putchar('_');

	putchar('\n');
	return;
}

