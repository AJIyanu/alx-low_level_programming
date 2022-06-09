#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * dlistint_len - counts node
 * @h: all that is needed
 *
 * Return: count
 */

size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *ptr = h;
	int count = 0;

	while (ptr != NULL)
	{
		count++;
		ptr = ptr->next;
	}
	return (count);
}
