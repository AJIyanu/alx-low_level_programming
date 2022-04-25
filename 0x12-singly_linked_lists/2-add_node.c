#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - creates node at the begining of a linked list
 * @head: former begining
 * @str: new data
 *
 * Return: pointer to the new head
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *ptr = NULL;

	ptr = malloc(sizeof(list_t));
	if (ptr == NULL)
		return (NULL);
	ptr->str = strdup(str);
	ptr->len = strlen(str);
	ptr->next = *head;
	*head = ptr;
	return (*head);
}

