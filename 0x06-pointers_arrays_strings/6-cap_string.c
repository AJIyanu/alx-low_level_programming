/**
 * cap - captilize a letter
 * @small: to be converted
 * Return: ascii value
 */

char cap(char small)
{
	if (small < 123 && small > 96)
		small = small - 32;
	return (small);
}

/**
 * cap_string - capitalize every letter that follows word separator
 * @str: sting to be worked on
 * Return: return pointer to the start of the string
 */


char *cap_string(char *str)
{
	int count;
	int j;
	char temp;
	char up[]  = {'\n', '\t', ' ', ',', '.', ';', '{', '}',
		'(', ')', '?', '"', '!'};

	for (count = 0; str[count] != '\0'; count++)
	{
		for (j = 0; j < 13; j++)
		{
			if (str[count] == up[j])
			{
				count++;
				temp = str[count];
				temp = temp - 32;
				str[count] = temp;
			}
		}
	}

	return (str);
}
