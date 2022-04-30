/**
 * get_endianness -jsjsj
 * Return: 1 small, 0 big
 */

int get_endianness(void)
{
	int i = 1;
	char *c = (char *) &i;

	return ((int *) c);
}
