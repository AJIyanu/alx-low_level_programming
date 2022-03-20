#include <stdio.h>
#include <stdlib.h>

/*
 * This code prints the highest factor
 * of a number which is also a prime
 * number
 */

/**
 * prime - main code here
 * @num - number to be tested for prime
 * Return: 1 if not prime and prime if prime
 */

int prime(int num)
{
	int test;

	test = 2;

	while (num % test != 0)
		test++;

	if (test == num)
		return (num);
	else
		return (1);
}

/**
 * hcpf - highest common prime factor
 * @num - number to be factored
 * Return: hcpf
 */

int hcpf(long num)
{
	int factor;

	factor = 2;

	while (factor <= num)
	{
		int pnum;

		pnum = prime(factor);

		if (pnum != 1)
		{
			while (num % factor == 0 && num != factor)
				num = num / factor;
		}

		if (factor == num)
		{
                        printf("%ld\n", num);
			break;
		}
		factor++;
	}
	return (0);



}

/**
 * main - checker
 * Return: 0
 */

int main(void)
{
	hcpf(612852475143);
	return (0);
}
