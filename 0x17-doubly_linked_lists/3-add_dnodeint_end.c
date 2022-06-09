#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_dnodeint_end - adds node at the beginning
 * @head: what we have
 * @n: what to add
 *
 * Return: address of new head
 */


dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *temp = *head;
	dlistint_t *ptr = NULL;

	ptr = malloc(sizeof(dlistint_t));
	if (ptr == NULL)
		return (NULL);
	if (temp == NULL)
	{
		*head = ptr;
		ptr->next = NULL;
		ptr->prev = NULL;
	}
	else
	{
		while (temp->next != NULL)
			temp = temp->next;
		ptr->n = n;
		ptr->prev = temp;
		temp->next = ptr;
		ptr->next = NULL;
	}
	return (ptr);
}
