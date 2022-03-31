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