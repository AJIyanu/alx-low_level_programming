#include <stdlib.h>
#include "lists.h"

/**
 * sum_listint - sums all numbers in the list
 * @head: start of list
 * Return: sum
 */

int sum_listint(listint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return(0);

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
