#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * listint_len
 * @h: head
 * Return: Number of nodes
 */

size_t listint_len(const listint_t *h)
{
	int node = 0;
	const listint_t *ptr = h;

	if (ptr == NULL)
		return (node);

	while (ptr != NULL)
	{
		node++;
		ptr = ptr->next;
	}
	return (node);
}
