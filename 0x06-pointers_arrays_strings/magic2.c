#include <stdio.h>

int main()
{
	int a, b, c;
	int *x, *y, *z;

	x = &a;
	y = &b;
	z = &c;

	printf("%p,\t%p,\t%p\n", x, y, z);
	return 0;
}
