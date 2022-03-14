#include <stdlib.h>
#include <stdio.h>

/**
 * This code is going to print
 * the digits and letters of hexadecimal
 */
 
/**
 * main - This where all codes go
 * Return: void
 */
 
 int main(void)
 {
	char hexa;
	 
	for (char hexa = '0'; hexa <= '9'; hexa++;)
		putchar(hexa);
	
	for (char hexa = 'a'; hexa <= 'f'; hexa++;)
		putchar(hexa);
		
	putchar('\n');
	return (0);
	 
 }