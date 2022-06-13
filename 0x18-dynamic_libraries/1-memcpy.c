/**
 * _memcpy - copies byte from source to detination
 * @dest: where we are copying to
 * @src: where we are copying from
 * @n: how many byte is transfered
 *
 * Return: address of the destination memory
 */


char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
