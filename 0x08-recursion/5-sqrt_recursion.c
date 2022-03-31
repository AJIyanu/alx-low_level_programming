/**
 * _sqrt_recursion2 - what will be multiplied together
 * @n: number to find
 * @d: to be divided by
 * Return: -1 if number doesnt exist otherwise sqrt
 */


int _sqrt_recursion2(int n, int d)
{
	if (n / d == d && n % d == 0)
		return (d);
	else if (n == (d / 2) || n < 0)
		return (-1);
	else
		return (_sqrt_recursion2(n, d + 1));
}

/**
 * _sqrt_recursion - what will be multiplied together
 * @n: number to find
 * Return: -1 if number doesnt exist otherwise sqrt
 */


int _sqrt_recursion(int n)
{
	int r;

	r = _sqrt_recursion2(n, 1);
	return (r);
}
