#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/* I am printing last digit with my own code */

/**
 * main - contains all the code
 * @n: stores a random number
 * @a: used to reduce to last digit
 *
 * Return: 0
int main(void)
{
	int n;
	int a;


	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* I dont know the above code buh this is mine */

	a = n;
	while (a > 10)
	a = a / 10;

	if (a > 5)
	printf("Last digit of %d is %d and is greater than 5\n", n, a)

	else if (a < 6 && a != 0)
	printf("Last digit of %d is %d and is less than 6 and not 0\n", n, a)

	else
	printf("Last digit of %d is %d and is 0\n", n, a)





	return (0);

}
