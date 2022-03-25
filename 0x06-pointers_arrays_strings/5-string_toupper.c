/**
 * string_toupper - This is going to convert to uppercase
 * @str: string to convert
 *
 * Return: return pointer to the characters
 */
char *string_toupper(char *str)
{
	int count;
	char up;

	for (count = 0; str[count] != '\0'; count++)
	{
		if (str[count] <= 122 && str[count] >= 97)
		{
			up = str[count];
			up = up - 32;
			str[count] = up;
		}
	}

	return (str);
}
