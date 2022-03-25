/**
 * rot13 - changing the letters of the alpahbet by its 13th letter
 * @rose: received string
 * Return: return pointer
 */


char *rot13(char *rose)
{
	int i;
	char up[] = "abcdefghijklmnopqrstuvwxyz";
	char us[] = "nopqrstuvwxyzabcdefghijklm";
	char wp[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char ws[] = "NOPQRSTUVWXYZABCDEFGHIJKLM";


	for (i = 0; rose[i] != '\0'; i++)
	{
		int j;
		char up;

		if ((rose[i] > 65 && rose[i] < 97) || (rose[i] > 96 && rose[i] < 123))
		{
			for (j = 0; !(rose[i] == up[j] || rose[i] == wp[j]); j++)
				;
			rose[i] = ws[j];
			}
		}
	}
	return (rose);
}
