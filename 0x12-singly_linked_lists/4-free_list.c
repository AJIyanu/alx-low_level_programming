#include <stdlib.h>
#include "lists.h"

/**
 * free_list - cycles through the list and frees them
 * @head: address of the first list
 *
 * Return: mo shit is returned
 */

void free_list(list_t *head)
{
	list_t *ptr = NULL;

	if (head == NULL)
		return;
	while (head->next != NULL)
	{
		ptr = head;
		head = head->next;
		free(ptr);
	}
	free(head);
}
		
