#include <stdio.h>
#include "main.h"

/*
 * Printing multiplication table
 */

/**
 * times_table - muliples of 9
 * Return: void
 */

void times_table(void)
{
	int i;
	int j;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (j == 0)
				printf("%d", i * j);
			else if (i * j > 9)
				printf(", %d", i * j);
			else
				printf(",  %d", i * j);
		}
		printf("\n");
	}
}
