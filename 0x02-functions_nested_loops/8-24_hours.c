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
 * @'ht' - minutes tens
 * @'hu' - hours unit
 * Return - nothing, just print.
 */
void minutes(int ht, int hu)
{
	int mt;
	int mu;

	for (mt = '0'; mt < '6'; mt++)
	{
		for (mu = '0'; mu <= '9'; mu++)
		{
			if (ht == '2' && hu == '4')	
				break;

			_putchar(ht);
			_putchar(hu);
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
