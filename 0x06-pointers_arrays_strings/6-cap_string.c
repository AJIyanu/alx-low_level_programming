/**
 * cap - captilize a letter
 * @small: to be converted
 * Return: ascii value
 */

char cap(char *small)
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


char *cap_string(char *)
{
	int count;
	char up;

	for (count = 0; str[count] != '\0'; count++)
	{
		if (str[count] > 31 && str[count] < 48)
		{
			count++;
			up = str[count];
			str[count] = cap(up);
		}
		else if (str[count] > 57 && str[count] < 65)
		{
			count++;
			up = str[count];
			str[count] = cap(up);
                }
		else if (str[count] > 90 && str[count] < 97)
		{
			count++;
			up = str[count];
			str[count] = cap(up);
		}
		else if (str[count] > 122 && str[count] < 126)
		{
			count++;
			up = str[count];
			str[count] = cap(up);
		}
		else if (str[count] == '\n' || str[cout] == '\t')
		{
			count++;
			up = str[count];
			str[count] = cap(up);
		}
		else
			continue;
	}

	return (str);
}
