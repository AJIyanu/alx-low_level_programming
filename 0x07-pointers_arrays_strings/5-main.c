#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    char *s = "i beg to cook egg for them";
    char *f = "egg";
    char *t;

    t = _strstr(s, f);
    printf("%s\n", t);
    return (0);
}
