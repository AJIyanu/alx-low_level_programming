/**
 * _memset - initializes data into specific memories
 * @s: address of the fisrt buffer
 * @b: data ti initialize with
 * @n: how many space should we consume?
 *
 * Return: address of the first buffer nooni
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		s[i] = b;
		i++;
	}
	return (s);
}
