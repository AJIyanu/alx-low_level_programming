#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * reverse_array - reverses an array
 * @a: address of the array
 * @n: size of thre freaking array
 *
 * Return: no shit
 */

void reverse_array(int *a, int n)
{
	int temp;
	int count = 0;
	int end = n;

	while (count < n / 2)
	{
		temp = a[end];
		a[end] = a[count];
		a[count] = temp;
		count++;
		end--;
	}
}
