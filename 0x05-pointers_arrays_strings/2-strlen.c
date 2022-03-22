/**
 * _strlen - check the length of a string
 * @s: string
 * Return: length
 */

int _strlen(char *s)
{
	int l;


	for (l = 0; s[l] != '\0'; ++l)
		;

	return (l);
}
