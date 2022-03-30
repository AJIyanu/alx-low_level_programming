#include <stdio.h>

int main()
{
	int a;
	int b;
	int c;
	// decalring the variables again

	int *p; // created a pointer variable

	a = 98; //initialized a
	b = 0; 
	c = 0;
	p = &a; //stores the address of a in p

	printf("This is the initial value, initialized\n");
	printf("%d\n%d\n%d\n\n", a, b, c);

	*(p + 1) = a;
	//This is same as p[1] and is calling the address of b
	p[2] = a;
	
	printf("This is the new value accesed with simple address arithmetic\n");
	printf("%d\n%d\n%d\n", a, b, c);
	//prints the new value of a b and c
}
