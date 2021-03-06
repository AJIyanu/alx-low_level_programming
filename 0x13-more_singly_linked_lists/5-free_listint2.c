#include <stdlib.h>
#include "lists.h"
#include <stdio.h>

/**
 * free_listint2 - cycles through the list and frees them
 * @head: address of the first list
 *
 * Return: no shit is returned
 */

void free_listint2(listint_t **head)
{
	listint_t *ptr = NULL;

	if (head == NULL)
		return;

	ptr = *head;

	if (ptr == NULL)
		return;

	while (*head != NULL)
	{
		*head = (*head)->next;
		free(ptr);
		ptr = *head;
	}
	head = NULL;

}
