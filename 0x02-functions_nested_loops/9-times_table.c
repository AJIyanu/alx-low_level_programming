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
			printf("%d", i * j);
			if ((i * j > 9) && (j  < 9))
				printf(", ");
			else if (j < 9)
				printf(",  ");
			else
				printf("\n");
	}

