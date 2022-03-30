#include <stdio.h>
#include <stdlib.h>
/*
 * This program is wriiten to simulate how memory is allocated
 * in the stack of the processor and use it to manipulate
 * variables.
 *
 * Before we proceed, you need to understand that for int = 4bytes,
 * char is 1bytes and float is four too. meaning that if you add a +1
 * to an int memory, you do not get exactly a plus 1 but plus four.
 * E.G An int a declared takes an address of say 201, a plus 1 to 201 means
 * 205
 */

/**
 * main - this is where the simulation goes
 * Return: just 0
 */


int main(void)
{
	int a = 98;
	int b = 0;
	int c = 0;
	int d = 0;

	/* now we are going to print the addresses in decimal */

	printf("%d\t%d\t%d\t%d\n", &a, &b, &c, &d);

	/* 
	 * Now you should notice that the memories are allocated in sucession
	 * Meaning if i can get the address of one of the variables, I can manipulate
	 * other variables by simple address manipulations.
	 */
	int *p = &a;
	
	for (; p < 4; p--)
	{
		*p = a;
		printf("%d\t%d\t%d\t%d\n", b, c, d);
	}
}
