#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    listint_t *head;

    head = NULL;
    printf("now trying to free\n");
    free_listint2(NULL);
    printf("freed\n");
    printf("%p\n", (void *)head);
    return (0);
}
