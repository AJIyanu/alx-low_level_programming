/**
 * leet - encoder 1337
 * @plain: letters to encode
 * Return: pointer to the sring
 */

char *leet(char *plain)
{
	int i;
	int c;

	char p[] = {'a', 'e', 'o', 't', 'l'};
	char P[] = {'A', 'E', 'O', 'T', 'L'};
	char code[] = {'4', '3', '0', '7', '1'};

	for (i = 0; plain[i] != '\0'; i++)
	{
		for (c = 0; c < 5; c++)
		{
			if (plain[i] == p[c] || plain[i] == P[c])
				plain[i] = code[c];
		}
	}
	return (plain);
}
