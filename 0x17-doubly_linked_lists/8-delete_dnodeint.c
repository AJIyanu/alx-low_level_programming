#include <stdlib.h>
#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes
 * @head: we need it to enter
 * @index: Point of action
 *
 * Return: success status
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *ptr = *head;
	unsigned int count = 0;

	if (ptr == NULL)
		return (-1);
	if (index == 0 && ptr->next != NULL)
	{
		ptr = ptr->next;
		free(ptr->prev);
		ptr->prev = NULL;
		*head = ptr;
		return (1);
	}
	while (ptr->next != NULL)
	{
		if (count == index)
		{
			(ptr->prev)->next = ptr->next;
			(ptr->next)->prev = ptr->prev;
			free(ptr);
			return (1);
		}
		ptr = ptr->next;
		count++;
	}
	if (ptr->next == NULL && count == index)
	{
		if (index == 0)
		{
			free(ptr);
			*head = NULL;
		}
		else
		{
			ptr = ptr->prev;
			free(ptr->next);
			ptr->next = NULL;
		}
		return (1);
	}
	return (-1);
}
