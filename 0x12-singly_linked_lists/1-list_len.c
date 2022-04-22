#include "lists.h"

/**
 * list_len - counts number element in a list
 * @h: pointer to the head of the list
 *
 * Return: counts
 */

size_t list_len(const list_t *h)
{
	int count = 0;
	list_t *ptr = h;

	if (ptr == NULL)
		return (0);
	while (ptr != NULL)
	{
		count++;
		ptr = ptr->next;
	}
	return (count);
}
