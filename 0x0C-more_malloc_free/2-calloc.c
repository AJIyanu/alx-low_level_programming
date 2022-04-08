/**
 * _calloc - my defined calloc
 * @nmemb: memory number
 * @size: size type
 *
 * Return: pointer to set memory
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	int i;
	char *ptr;

	if (nmemb * size == 0)
		return (NULL);

	ptr = malloc(nmemb * size);
	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < nmemb; i++)
		ptr[i] = 0;

	return (ptr);
}
