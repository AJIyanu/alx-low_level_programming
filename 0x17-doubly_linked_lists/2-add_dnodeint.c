#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_dnodeint - adds node at the beginning
 * @head: what we have
 * @n: what to add
 *
 * Return: address of new head
 */


dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *ptr = NULL;

	ptr = malloc(sizeof(dlistint_t));
	if (ptr == NULL)
		return (NULL);
	if (*head == NULL)
	{
		*head = ptr;
		ptr->next = NULL;
		ptr->prev = NULL;
	}
	else
	{
		ptr->n = n;
		ptr->next = *head;
		(*head)->prev = ptr;
		*head = ptr;
	}
	return (ptr);
}
