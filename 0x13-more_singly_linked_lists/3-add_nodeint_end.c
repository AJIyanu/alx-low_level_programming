#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "lists.h"

/**
 * add_nodeint_end - creates node at the begining of a linked list
 * @head: former begining
 * @n: new data
 *
 * Return: pointer to the new head
 */

list_t *add_nodeint_end(list_t **head, const char *n)
{
	listint_t *ptr = NULL;
	listint_t *temp = *head;

	if (*head == NULL)
	{
		ptr = malloc(sizeof(listint_t));
		if (ptr == NULL)
			return (NULL);
		*head = ptr;
		ptr->n = n;
		ptr->next = NULL;
	}
	else
	{
		while (temp->next != NULL)
			temp = temp->next;
		
		ptr = malloc(sizeof(list_t));
		if (ptr == NULL)
			return (NULL);
		temp->next = ptr;
		ptr->n = n;
		ptr->next = NULL;

	}
	return (ptr);
}