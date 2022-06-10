#include <stdlib.h>
#include "lists.h"

/**
 * get_dnodeint_at_index - address of node at index
 * @head: header
 * @index: POS sorry Point of Return
 *
 * Return: address of index
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *ptr = head;
	unsigned int count = 0;

	if (ptr == NULL)
		return (NULL);
	while (ptr != NULL)
	{
		if (count == index)
			return (ptr);
		count++;
		ptr = ptr->next;
	}
	return (ptr);
}
