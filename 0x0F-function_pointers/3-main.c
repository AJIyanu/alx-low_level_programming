#include <stdlib.h>
#include <stdio.h>
#include "3-calc.h"

/**
 * main - peforms operation
 * @argc: count
 * @argv: pointer
 *
 * Return: result
 */

int main(int argc, char *argv[])
{
	int i;
	int num1;
	int num2;
	int ans;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);

	ans = (get_op_func(argv[2]))(num1, num 2);
	printf("%d\n", ans);
	return (0);
}
