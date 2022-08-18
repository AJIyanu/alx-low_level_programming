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
	listint_t *temp = NULL;
	unsigned int i = 1;

	printf("all good before malloc\n");
	ptr = malloc(sizeof(listint_t));
	if (ptr == NULL)
		return (NULL);
	printf("now we check for null\n");
	if (head == NULL)
	{
		ptr->n = n;
		ptr->next = NULL;
		printf("ptr assignment done here, changing head \n");
		head = &ptr;
		return (ptr);
	}
	printf("null check suceeded going to 0 index\n");
	temp = *head;
	while (temp != NULL && i < idx)
	{
		temp = temp->next;
		i++;
	}
	if (temp == NULL)
	{
		ptr->n = n;
		ptr->next = NULL;
		*head = ptr;
	}
	if (idx == 0)
	{
		ptr->n = n;
		ptr->next = temp;
		*head = ptr;
	}
	else
	{
		ptr->n = n;
		ptr->next = temp->next;
		temp->next = ptr;
	}
	return (ptr);
}
