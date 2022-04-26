#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_listint
 * @h: head
 * Return: Number of nodes
 */

size_t print_listint(const listint_t *h)
{
	int node = 0;
	const listint_t *ptr = h;

	if (ptr == NULL)
		return (0);

	while (ptr != NULL)
	{
		printf("%d\n", ptr->n);
		node++;
		ptr = ptr->next;
	}
	return (node);
}
