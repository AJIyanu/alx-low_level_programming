#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    char *s = "hello";
    char *f;
    char *n;


    f = _strchr(s, 'l');
    n = _strchr(s, 'a');

    if (f != NULL)
    {
        printf("%s\n", f);
    }

    if (n == NULL)
	    printf("ooops"); 
    return (0);
}
