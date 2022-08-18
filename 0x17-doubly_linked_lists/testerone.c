#include <stdio.h>
#include <stdlib.h>

int ispal(int num)
{
	long int rev = 0;
	long int rnum = num;

	while (num > 9)
	{
		rev = (rev * 10) + (num % 10);
		num = num / 10;
	}
	rev = rev * 10 + num;
	if (rnum == rev)
		return (1);
	else
		return (0);
}

int main(void)
{
	long int c;
	long int d;
	long int check = 0;
	long int pal[3] = {0, 0, 0};

	for (c = 100; c < 1000; c++)
	{
		for (d = 100; d < 1000; d++)
		{
			check = ispal(c * d);
			if (check == 1 && c * d > pal[2])
			{
				pal[0] = c;
				pal[1] = d;
				pal[2] = c * d;
				printf("%ld × %ld = %ld\n", pal[0], pal[1], pal[2]);
			}
			else
				printf("%ld × %ld not pali\n", c, d);

		}
		printf("check for %ld\n", c);
	}
	printf("%ld × %ld = %ld - final answer\n", pal[0], pal[1], pal[2]);

	return (0);
}
