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
//	char begin;
	char end;


	for (l = 0; l != '\0'; ++l)
		;
	i = l - 1;

	for (m = 0; m <= i; m++)
	{
		temp = s[m];
		end = s[i];
		s[i] = temp;
		s[m] = end;
//		s[m] = s[i];
//		s[i] = temp;
		i--;
	}
//	s[l] = '\0';
}
