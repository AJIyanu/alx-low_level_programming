#include <stdlib.h>
#include "lists.h"

/**
 * insert_nodeint_at_index - insert int at index
 * @head: start of list
 * @idx: index
 * @n: int to add
 */


listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *temp = NULL;


