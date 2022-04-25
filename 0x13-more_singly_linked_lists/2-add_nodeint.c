#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "lists.h"

/**
 * add_nodeint - creates node at the begining of a linked list
 * @head: former begining
 * @n: new data
 *
 * Return: pointer to the new head
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	list_t *ptr = NULL;

	ptr = malloc(sizeof(list_t));
	if (ptr == NULL)
		return (NULL);
	ptr->n = n
	ptr->next = *head;
	*head = ptr;
	return (*head);
}