#include <stdio.h>
#include "main.h"

/*
 * This is going to print all hours
 * with minutes inclusive. I have purposely
 * decided to write this code myself
 * because I believe it is how the
 * digital time is wriiten.
 */

/**
 * minutes - this code controls only  all the minutes
 * @ht - minutes tens
 * @hu - hours unit
 * Return - nothing, just print.
 */
void minutes(int ht, int hu)
{
	int mt;
	int mu;

	if (ht < 3 && hu < 5)
		for (t = 0; t < 6; t++)
		{
			for (u = 0; u <= 9; u++)
			{
				_putchar(ht);
				_putchar(hu);
				_putchar(':');
				_putchar(mt);
				_putchar(mu);
				_putchar('\n');
			}
		}
	else
		break;
}


/**
 * main - this sends to the minutes
 * Return: nothing
 */


int main(void)
{
	int ht;
	int hu;

	for (ht = 0; ht < 3; ht++)
	{
		for (hu = 0; hu <= 9; hu++)
			minutes(ht, hu);
	}
	return (0);
}
