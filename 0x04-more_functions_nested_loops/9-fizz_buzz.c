#include <stdio.h>

/*
 * This is a program that prints 1 -100
 * but prints fizz for every mulitiple
 * of 3's and buzz for multiples of 5's
 * and fizzbuzz for multiples of 3 and 5
 */

/**
 * main - code here
 * Return: nothing
 */

int main(void)
{
	int num;

	for (num = 1; num <= 100; num++)
	{
		if (num % 15 == 0)
			printf("FizzBuzz");
		else if (num % 5 == 0)
			printf("Buzz");
		else if (num % 3 == 0)
			printf("Fizz");
		else
			printf("%d", num);
		if (num != 100)
			printf(" ");
	}
	printf("\n");
	return (0);
}
