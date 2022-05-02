#include <stdlib.h>
#include "lists.h"
#include <stdio.h>

/**
 * get_nodeint_at_index - go to specific index and return int stored
 * @head: address of the start
 * @index: starting with zero
 *
 * Return: interger
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *ptr = head;
	unsigned int n = 0;

	while (n <= index)
	{
		if (ptr == NULL)
			return (NULL);
		ptr = ptr->next;
		n++;
	}
	return (ptr);
}
