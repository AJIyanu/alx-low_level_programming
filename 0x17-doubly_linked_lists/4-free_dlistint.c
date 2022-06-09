#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * free_dlistint - freedom in christ Jesus
 * @head: we need some head to start from
 * Return: no shit
 */

void free_dlistint(dlistint_t *head)
{
	while (head->next != NULL)
	{
		head = head->next;
		free(head->prev);
	}
	free(head);
}
