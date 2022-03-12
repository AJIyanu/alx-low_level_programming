#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/* 
 * This program is going to generate a random number and store
 * in a n, the program then checks if the number stored is p
 * it then give us the result
 */

int main(void)
{
/* This is code that generates and stored the random number */
	
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	/* the above code generates the random number, now to tbe check */

	if (n > 0)
		printf("%d is positive\n", n);
	/* This checks if the number is positive */
	else if (n == 0)
		printf("%d is zero\n", n);
	/* This checks if the number is zero */
	else
		printf("%d is negative\n", n);

	return (0);

}
