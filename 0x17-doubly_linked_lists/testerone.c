#include <stdio.h>
#include <stdlib.h>

int ispal(int num)
{
	int rev = 0;
	int rnum = num;

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
	int c;
	int d;
	int check = 0;
	int pal[3] = {0, 0, 0};

	for (c = 100; c < 1000; c++)
	{
		for (d = 100; d < 1000; d++)
		{
			if (d >= c)
				check = ispal(c * d);
			else
				check = 0;
			if (check == 1 && c * d > pal[2])
			{
				pal[0] = c;
				pal[1] = d;
				pal[2] = c * d;
				printf("%d × %d = %d\n", pal[0], pal[1], pal[2]);
			}
		}
	}
	printf("%d × %d = %d - final answer\n", pal[0], pal[1], pal[2]);

	return (0);
}
