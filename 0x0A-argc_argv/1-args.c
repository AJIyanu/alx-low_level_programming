#include <stdio.h>

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

	for (i = 1, i < argc, i++)
		printf("%s\n", argv[0]);
	return (0);
}

