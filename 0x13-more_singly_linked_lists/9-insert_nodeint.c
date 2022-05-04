#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * insert_nodeint_at_index - insert int at index
 * @head: start of list
 * @idx: index
 * @n: int to add
 *
 * Return: pointer
 */


listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *ptr = NULL;
	listint_t *temp = *head;
	unsigned int i = 1;

	while (temp != NULL && i <= idx)
	{
		temp = temp->next;
		i++;
	}

	if (temp == NULL)
		return (NULL);

	ptr = malloc(sizeof(listint_t));
	if (ptr == NULL)
		return (NULL);
	ptr->n = n;
	ptr->next = temp->next;
	temp->next = ptr;
	return (ptr);
}
