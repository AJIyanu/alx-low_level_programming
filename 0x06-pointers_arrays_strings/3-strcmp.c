/**
 * _strcmp - compares two strings
 * @s1: first string
 * @s2: second string
 *
 * Return: difference between the two ascii value
 */


int _strcmp(char *s1, char *s2)
{
	int rose;
	int j;

	rose = 0;
	while (s1[rose] != '\0' && s2[rose] != '\0')
	{
		if (s1[rose] == s2[rose])
		{
			j = 0;
			rose++;
		}
		else if (s1[rose] > s2[rose])
		{
			j = s1[rose] - s2[rose];
			break;
		}

		else
		{
			j = s1[rose] - s2[rose];
			break;
		}
	}

	return (j);
}
