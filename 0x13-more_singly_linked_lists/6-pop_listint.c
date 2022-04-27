#include <stdlib.h>
#include "lists.h"

/**
 * pop_listint - delete head
 * @head: address
 * Return: the number on head
 */

int pop_listint(listint_t **head)
{
	listint_t *ptr = *head;
	int n;

	if (ptr == NULL)
		return (0);

	*head = (*head)->next;
	n = ptr->n;
	free(ptr);

	return (n);
}
