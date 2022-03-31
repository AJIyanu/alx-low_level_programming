#include <stdio.h>
/**
 * _strlen_recursion - finds the length of a string recursively
 * @s: address to the base of string array
 * Return: length of the string
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	else
		return (1 + _strlen_recursion(s + 1));
}

/**
 * is_palindrome2 - checks if numbers repeat from behind
 * @s: string to compare
 * @l: length of string to compare
 * Return: 1 on success
 */

int is_palindrome2(char *s, int l)
{
	int r = 0;

	if (l < 0)
		return (1);
	else if (*s == s[l])
		r = is_palindrome2(s + 1, l - 2);
	return (r);
}

/**
 * is_palindrome - checks if numbers repeat from behind
 * @s: string to compare
 * Return: 1 on success
 */

int is_palindrome(char *s)
{
	int l;
	int r;

	l = _strlen_recursion(s);
	if (l == 0)
		return (1);
	l = l - 1;
	r = is_palindrome2(s, l);
	return (r);
}




