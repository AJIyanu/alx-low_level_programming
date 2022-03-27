#include <stdio.h>

/**
 * main - first 50 finobacci
 * Return: 0 om success
 */

int main(void)
{
	long int fins;
	long int finss;
	long int finp = 0;
	long int finn = 1;

	fins = finp + finn;

	finss = fins;

	while (fins <= 4000000)
	{
		fins = finn + finp;
		finp = finn;
		finn = fins;
		if (fins % 2 == 0)
		{
			finss = finss + fins;
		}
	}
	printf("%ld\n", finss - 1);

	return (0);

}
