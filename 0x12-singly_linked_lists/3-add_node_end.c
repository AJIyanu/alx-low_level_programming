#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - creates node at the begining of a linked list
 * @head: former begining
 * @str: new data
 *
 * Return: pointer to the new head
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *ptr = NULL;
	list_t *temp = *head;
	int count = 0;

	if (*head == NULL)
	{
		ptr = malloc(sizeof(list_t));
		if (ptr == NULL)
			return (NULL);
		*head = ptr;
		ptr->str = strdup(str);
		ptr->len = strlen(str);
		ptr->next = NULL;
	}
	else
	{
		while (temp->next != NULL)
		{
			temp = temp->next;
			count++;
		}
		ptr = malloc(sizeof(list_t));
		if (ptr == NULL)
			return (NULL);
		temp->next = ptr;
		ptr->str = strdup(str);
		ptr->len = strlen(str);
		ptr->next = NULL;

	}
	return (ptr);
}

