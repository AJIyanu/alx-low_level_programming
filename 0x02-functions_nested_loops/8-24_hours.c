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
 * @t - minutes tens
 * @u - hours unit
 * Return - nothing, just print.
 */
void minutes(int t, int u)
{
	int mt;
	int mu;

	for (mt = '0'; mt < '6'; mt++)
	{
		for (mu = '0'; mu <= '9'; mu++)
		{
			_putchar(t);
			_putchar(u);
			_putchar(':');
			_putchar(mt);
			_putchar(mu);
			_putchar('\n');
		}
	}
}


/**
 * jack_bauer - this sends to the minutes
 * Return: void
 */


void jack_bauer(void)
{
	int ht;
	int hu;

	for (ht = '0'; ht < '3'; ht++)
	{
		for (hu = '0'; hu <= '9'; hu++)
		{
			if (ht == '2' && hu == '4')
				break;
			minutes(ht, hu);
		}
	}
}
