/**
 * _strcpy - copies a source string to destination
 * @dest: destination
 * @src: source
 *
 * Return: destination pointer
 */


char *_strcpy(char *dest, char *src)
{
	int i;

	i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';

	return (dest);
}
