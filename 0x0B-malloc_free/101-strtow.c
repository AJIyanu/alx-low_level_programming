#include <stdio.h>
#include <stdlib.h>

/**
 * countWords - Counts the numbers of words in a string
 * @str: address of the string
 * Return: The numbers of string encountered
 */

unsigned countWords(char *str)
{
	int state = 0;
	unsigned wc = 0; // word count

	while (*str)
	{
		if (*str == ' ' || *str == '\n' || *str == '\t')
			state = 0;

		else if (state == 0)
		{
			state = 1;
			++wc;
		}

		++str;
	}

	return wc;
}

/**
 * strtow - breaks string into array of arrays
 * @str: address of the string
 * Return: pointer to pointer of broken strings
 */

char **strtow(char *str)
{
	int wc;
	char **arr;

	wc = countWords(str);
	printf("%d\n", wc);
	arr = (int **)malloc(wc * sizeof(char *));
	return (arr);
}

void print_tab(char **tab)
{
    int i;

    for (i = 0; tab[i] != NULL; ++i)
    {
        printf("%s\n", tab[i]);
    }
}

/**
 * main - check the code for ALX School students.
 *
 * Return: 1 if an error occurred, 0 otherwise
 */
int main(void)
{
    char **tab;

    tab = strtow("      Holberton School         #cisfun      ");
    if (tab == NULL)
    {
        printf("Failed\n");
        return (1);
    }
    print_tab(tab);
    return (0);
}
