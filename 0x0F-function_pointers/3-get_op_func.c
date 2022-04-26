#include <stdlib.h>
#include <stdio.h>
#include "3-calc.h"

/**
 * get_op_func - get operation and supplies function
 * @s: operation
 * 
 * Return: value
 */

int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i;

	if (s != '+', && s != '-' && s != '*' && s != '/' && s != '%')
		return (NULL);
	while

