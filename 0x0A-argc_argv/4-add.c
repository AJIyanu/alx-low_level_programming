#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints my name
 * @argc: number
 * @argv: string
 *
 * Return: success
 */

int main(int argc, char* argv[])
{
	int i;
	int num;
	int sum = 0;

	for (i = 1; i < argc; i++)
	{
		num = atoi(argv[i]);
		sum = sum + num;
	}
	printf("%d\n", sum);
	return (0);
}

