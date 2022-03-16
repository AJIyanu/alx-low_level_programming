#include <stdio.h> 
#include <stdlib.h>

/*
 * This function is going to print a-z
 * ten times calling the previous function
 */
 
/**
 * 2-prnt_alphabet_x10.c - i have purposely removed a letter
 * Return: void
 */
 
void prnt_alphabet_x10(void)
{
	int a;
	
	for (a = 0; a < 10; a++)
	{
		int i;
		
		for (i = 'a'; i <= 'z'; i++)
		{
			putchar(i);
			putchar('\n');
			
		}
	}
}
