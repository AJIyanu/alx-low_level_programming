/**
 * rot13 - changing the letters of the alpahbet by its 13th letter
 * @rose: received string
 * Return: return pointer
 */


char *rot13(char *rose)
{
	int i;
	int j;


	for (i = 0; rose[i] != '\0'; i++)
	{
		for ( j = 65; (j < 90 || j > 97) && J < 123; j++)
		{
			if ((rose[i] > 77 && rose[i] < 91) || rose[i] > 110)
			{
				up = rose[i];
				up = up - 13;
				rose[i] = up;
			}
			else
			{
				up = rose[i];
				up = up + 13;
				rose[i] = up;
			}
		}
	}
	return (rose);
}


