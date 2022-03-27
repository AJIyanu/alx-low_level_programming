/**
 * rot13 - changing the letters of the alpahbet by its 13th letter
 * @rose: received string
 * Return: return pointer
 */


char *rot13(char *rose)
{
	int i;
	char up[] = "abcdefghijklmn\
		     opqrstuvwxyz\
		     ABCDEFGHIJKLMN\
		     OPQRSTUVWXYZ";
	char us[] = "nopqrstuvwxyza\
		     bcdefghijklm\
		     NOPQRATUVWXYZA\
		     BCDEFGHIJKLMN";
	int j;


	for (i = 0; rose[i] != '\0'; i++)
	{
		for (j = 0; up[j] != '\0'; j++)
		{
			if (rose[i] == up[j])
				rose[i] = us[j];
		}
	}

	return (rose);
}
