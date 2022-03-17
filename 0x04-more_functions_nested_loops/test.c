#include <stdio.h>

int test(int c)
{

	if (c/10)
	{
		c = c/10;
		test(c);
		putchar(c);
	}
	
	putchar('\n');
	return (0);
}


int main()
{
	test(129);
	return (0);
}

