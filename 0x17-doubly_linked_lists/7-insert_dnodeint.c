
#include <stdlib.h>
#include "lists.h"

/**
 * insert_dnodeint_at_index - as name imply
 * @h: we need something to enter
 * @idx: insertion point
 * @n: inserted stock
 *
 * Return: address of added data
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *ptr = *h;
	dlistint_t *temp = NULL;
	unsigned int count = 0;

	temp = malloc(sizeof(dlistint_t));
	if (temp == NULL)
		return (NULL);
	if (ptr == NULL && idx == 0)
	{
		temp->n = n;
		temp->next = NULL;
		temp->prev = NULL;
		*h = temp;
		return (temp);
	}
	if (ptr != NULL && idx == 0)
		return (add_dnodeint(h, n));
	while(ptr != NULL)
	{
		if (count == idx)
		{
			temp->n = n;
			temp->next = ptr;
			temp->prev = ptr->prev;
			(ptr->prev)->next = temp;
			ptr->prev = temp;
			return (temp);
		}
		ptr = ptr->next;
		count++;
	}
	if (count == idx)
		return (add_dnodeint_end(h, n));
	return (NULL);
}
