#include <stdio.h>




int main ()
{
	int n = 0;
	int o = 0;
	int p = 0;
	int i;


	int *q = &n;
	int *r = &o;
	int *s = &p;

	s[1] = 21;
	s[2] = 26;
	s[0] = 10;
	printf("%p\n%p\n%p\n%d\n%d\n%d\n", q, r, s, n, o, p);
	return(0);
}

