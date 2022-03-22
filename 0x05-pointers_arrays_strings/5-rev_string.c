/**
 * rev_string - reverses whatever string is sent in
 * @s: string input
 * Return: nothing is neccesary
 */

void rev_string(char *s)
{
	int i;
	int j;
	char rev[10];

	for (i = 0; s[i] != '\0'; ++i)
		rev[i] = s[i];

	j = 0;

	for (; i >= 0; i--)
	{
		s[j] = rev[i];
		j++;
	}
}
