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
	int mul = 1;
	int num = 0;

	if (argc == 1)
		printf("Error\n");
	else
	{
		for (i = 1; i < argc; i++)
		{
			num = atoi(argv[i]);
			mul = mul * num;
		}
		printf("%d\n", mul);
	}
	return (0);
}

