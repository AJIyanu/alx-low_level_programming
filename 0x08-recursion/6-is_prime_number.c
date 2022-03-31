/**
 * is_prime_number - checks if its a prime number
 * @n: number to be checked
 * Return: 1 if true and 0 if false
 */

int is_prime_number(int n)
{
	int i = 2;

	if (n % i == 0)
		return (0);
	else if (i == n)
		return (
