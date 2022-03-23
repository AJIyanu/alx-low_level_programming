/**
 * rev_string - reverses whatever string is sent in
 * @s: string input
 * Return: nothing is neccesary
 */

void rev_string(char *s)
{
	int i;
	int l;
	int m;
	char temp;


	for (l = 0; l != '\0'; ++l)
		;
	i = l - 1;

	for (m = 0; m < (l / 2); m++)
	{
		temp = s[m];
		s[m] = s[i];
		s[i--] = temp;
	}
}
