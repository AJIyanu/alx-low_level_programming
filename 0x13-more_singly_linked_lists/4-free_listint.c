#include <stdlib.h>
#include "lists.h"

/**
 * free_listint - cycles through the list and frees them
 * @head: address of the first list
 *
 * Return: mo shit is returned
 */

void free_listint(list_t *head)
{
	list_t *ptr = head;

	if (head == NULL)
		return;
	while (head != NULL)
	{
		head = head->next;
		free(ptr);
		ptr = head;
	}

}
