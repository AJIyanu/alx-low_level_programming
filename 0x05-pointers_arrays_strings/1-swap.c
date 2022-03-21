/**
 * swap_int - swap integers
 * @a: first integer
 * @b: second integer
 *
 * Return: void
 */

void swap_int(int *a, int *b)
{
	 int c;

	 c = *b;
	 *b = *a;
	 *a = c;
}
