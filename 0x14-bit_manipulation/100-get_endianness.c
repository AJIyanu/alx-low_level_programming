/**
 * get_endianness -jsjsj
 * Return: 1 small, 0 big
 */

int get_endianness(void)
{
	int i = 1;
	char *c = (char *) &i;

	if (*c)
		return (1);
	else
		return (0);

}
