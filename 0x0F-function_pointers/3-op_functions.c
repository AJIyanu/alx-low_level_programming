#include <stdio.h>
#include <stdlib.h>

/**
 * op_add - addition
 * @a: number 1
 * @b: number 2
 *
 * Return: result
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - subtraction
 * @a: number 1
 * @b: number 2
 *
 * Return: result
 */
int op_sub(int a, int b)
{
	return (a - b);
}


/**
 * op_mul - multiplication
 * @a: number 1
 * @b: number 2
 *
 * Return: result
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - division
 * @a: number 1
 * @b: number 2
 *
 * Return: result
 */

int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	else
		return (a / b);
}

/**
 * op_mod - modulus
 * @a: number 1
 * @b: number 2
 *
 * Return: result
 */



int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	else
		return (a % b);
}
