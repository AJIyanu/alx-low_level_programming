#include <stdio.h>

/**
 * main - first 50 finobacci
 * Return: 0 on success
 */

int main(void)
{
	int i;
	unsigned long int fins;
	long int finp = 0;
	long int finn = 1;

	for (i = 0; i < 98; i++)
	{
		if (i == 97)
		{
			fins = finn + finp;
			printf("%ld", fins / 1000000000000000);
			printf("%ld\n", fins % 1000000000000000);
		}
		else
		{
			fins = finn + finp;
			printf("%ld, ", fins);
			finp = finn;
			finn = fins;
		}
	}
	return (0);

}
