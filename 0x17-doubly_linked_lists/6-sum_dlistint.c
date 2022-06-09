#include <stdlib.h>
#include "lists.h"

/**
 * sum_dlistint - sums all nodes
 * @head: headsummer
 * Return: sum
 */

int sum_dlistint(dlistint_t *head)
{
	dlistint_t *ptr = head;
	int sum = 0;

	if (ptr == NULL)
		return(sum);
	while(ptr != NULL)
	{
		sum += ptr->n;
		ptr = ptr->next;
	}
	return(sum);
}
