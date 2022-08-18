#include <stdio.h>
#include <stdlib.h>
#include "lists.h"


/**
 * print_dlistint - traverse and print list
 * @h: all that is needed
 * Return: number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *ptr = h;
	int count = 0;

	if (ptr == NULL)
		return (count);
	while (ptr != NULL)
	{
		printf("%d\n", ptr->n);
		count++;
		ptr = ptr->next;
	}
	return (count);
}
