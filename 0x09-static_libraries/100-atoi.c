/**
 * _atoi - converts string into int value
 * @s: address of the start of the string
 * Return: the string value
 */

int _atoi(char *s)
{
	int sign = 1;
	int c = 0;
	int skip = 1;
	int i = 0;

	while (s[c] != '\0')
	{
		while (s[c] <= '9' && s[c] >= '0')
		{
			skip = 0;
			i = (i * 10) + (s[c] - 48);
			c++;
		}

		if (s[c] == '-' && skip == 1)
			sign = sign * -1;
		if (skip == 0)
			break;
		c++;
	}
	return (sign * i);
}
