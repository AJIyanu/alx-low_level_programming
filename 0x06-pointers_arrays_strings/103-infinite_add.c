/**
 * infinite_add - adds numbers in an array
 * @n1: first number
 * @n2: second l number
 * @r: result stored here
 * @size_r: how many?
 */

char *infinte_add(char *n1, char *n2, char *r, int size_r)
{
	int i;

	for (i = 0; i < size_r; i++)
		r[i] = n1[i] + n2[i];
	if (r[i])
		return (r);
	else
		return (0);
}
